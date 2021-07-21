#include <iostream>
#include <cstddef>

#include "absl/strings/str_cat.h"
#include "absl/strings/str_format.h"
#include "absl/types/optional.h"
#include "tcmalloc/malloc_extension.h"

extern "C" void cc_main() {
	std::cout << "TESTTCMALLOC" << std::endl;

	absl::optional<size_t> heap_size =
      tcmalloc::MallocExtension::GetNumericProperty(
          "generic.current_allocated_bytes");
 std::cout << (heap_size.has_value() ? "Has heap" : "NO Heap") << std::endl;
  if (heap_size.has_value()) {
	  std::cout << "Current heap size = " << *heap_size << " bytes" << std::endl;
  }

  // Allocate memory, printing the pointer to deter an optimizing compiler from
  // eliding the allocation.
  constexpr size_t kSize = 1024 * 1024 * 1024;
  std::unique_ptr<char[]> ptr(new char[kSize]);

  heap_size = tcmalloc::MallocExtension::GetNumericProperty(
      "generic.current_allocated_bytes");
  if (heap_size.has_value()) {
	  std::cout << "Current heap size = " << *heap_size << " bytes" << std::endl;
  }

  void* ptr2 = malloc(kSize);

  heap_size = tcmalloc::MallocExtension::GetNumericProperty(
      "generic.current_allocated_bytes");
  if (heap_size.has_value()) {
	  std::cout << "Current heap size = " << *heap_size << " bytes" << std::endl;
  }

  free(ptr2);
}
