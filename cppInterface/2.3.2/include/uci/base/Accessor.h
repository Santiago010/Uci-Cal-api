/** @file Accessor.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:05 PM
 *
 * <pre>
 * Unclassified               U N C L A S S I F I E D               Unclassified
 *
 * DISTRIBUTION STATEMENT D: Distribution authorized to Department of Defense
 *    and U.S. DoD contractors only, Critical Technology, Export Controlled,
 *    26 January 2023. Other requests for this document shall be referred to
 *    AFLCMC/XA (OAMO), Wright-Patterson AFB OH 45433.
 *
 * DESTRUCTION NOTICE: Destroy by any method that will prevent disclosure of
 *    contents or reconstruction of the document.
 *
 * WARNING - This document contains technical data whose export is restricted
 *    by the Arms Export Control Act (Section 2751 of Title 22, United States
 *    Code) or the Export Control Reform Act of 2018 (Chapter 58 Sections
 *    4801-4852 of Title 50, United States Code). Violations of these export
 *    laws are subject to severe criminal penalties. Disseminate in accordance
 *    with provisions of DoD Directive 5230.25 and DoD Instruction 2040.02.
 *
 * Controlled by: USAF
 * Controlled by: AFLCMC/XA (OAMO)
 * CUI Category(ies): CTI, EXPT
 * Distribution Statement D
 * POC: Wayne Artuso, 937-713-5124
 *
 * CUI//SP-CTI/SP-EXPT
 * </pre>
 *
 */

#ifndef UCI_BASE_ACCESSOR_H
#define UCI_BASE_ACCESSOR_H

#include <string>

#include "UCIException.h"
#include "accessorType.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all base data types are declared */
namespace base {

/** The Accessor is the base class of all accessors. */
// El Accessor es la clase base de todos los accesorios
class Accessor {
public:

  /** Returns this accessor's type constant, i.e. null.
    *
    * @return This accessor's type constant, i.e. null.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::base::accessorType::null;
  }

  /** This method resets the contents of this Accessor to their initial state, i.e. the state of the contents when the
    * Accessor was instantiated. At a minimum, this will include the following: erasing the contents of any string, erasing
    * the contents of any list, resetting any union so that no field is enabled, erasing the contents of any bounded list,
    * reseting any choice accessor so that no field is enabled. Implementations are free to perform additional operations
    * as part of resetting an accessor.
    */
  virtual void reset() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  Accessor() {
  }

  /** The destructor [only available to derived classes]. */
  ~Accessor() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The Accessor to copy from.
    */
  Accessor(const Accessor& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this Accessor to the contents of the Accessor on the right hand side
    * (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The Accessor on the right hand side (rhs) of the assignment operator whose contents are used to set the
    *      contents of this Accessor.
    * @return A reference to this Accessor.
    */
  Accessor& operator=(const Accessor& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace base
} // namespace uci

#endif // UCI_BASE_ACCESSOR_H

