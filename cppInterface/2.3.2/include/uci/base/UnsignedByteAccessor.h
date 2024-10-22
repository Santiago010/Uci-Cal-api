/** @file UnsignedByteAccessor.h
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

#ifndef UCI_BASE_UNSIGNEDBYTEACCESSOR_H
#define UCI_BASE_UNSIGNEDBYTEACCESSOR_H

#include "Accessor.h"
#include "../../xs/type/simpleXmlSchemaPrimitives.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all base data types are declared */
namespace base {

class AbstractServiceBusConnection;

/** The UnsignedByteAccessor accessor class is used to provide access to uci::xs::UnsignedByte data types. */
class UnsignedByteAccessor : public virtual Accessor {
public:

  /** Returns this accessor's type constant, i.e. unsignedByteAccessor.
    *
    * @return This accessor's type constant, i.e. unsignedByteAccessor.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::base::accessorType::unsignedByteAccessor;
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const UnsignedByteAccessor& accessor) = 0;

  /** Returns the UnsignedByte accessed by this UnsignedByteAccessor.
    *
    * @return The UnsignedByte accessed by this UnsignedByteAccessor.
    */
  virtual xs::UnsignedByte getUnsignedByteValue() const = 0;

  /** Sets the UnsignedByte accessed by this UnsignedByteAccessor to the specified UnsignedByte.
    *
    * @param value The UnsignedByte whose value will be used to set the value of the UnsignedByte accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::base::UnsignedByteAccessor& setUnsignedByteValue(xs::UnsignedByte value) = 0;

  /** Assigns the value of the UnsignedByte accessed by this UnsignedByteAccessor to the value of the UnsignedByte accessed
    * by the UnsignedByteAccessor on the right hand side (rhs) of the assignment operator.
    *
    * @param rhs The UnsignedByteAccessor on the right hand side (rhs) of the assignment operator which provides access to
    *      the UnsignedByte whose value is to be used to set the UnsignedByte that is accessed by this
    *      UnsignedByteAccessor.
    * @return A constant reference to this UnsignedByteAccessor.
    */
  virtual UnsignedByteAccessor& operator=(const UnsignedByteAccessor& rhs) {
    setUnsignedByteValue(rhs.getUnsignedByteValue());
    return *this;
  }

  /** Assigns the value of the UnsignedByte accessed by this UnsignedByteAccessor to the value of the UnsignedByte accessed
    * by the UnsignedByteAccessor on the right hand side (rhs) of the assignment operator.
    *
    * @param rhs The UnsignedByte whose value will be used to set the value of the UnsignedByte accessed by this accessor.
    * @return A constant reference to this UnsignedByteAccessor.
    */
  virtual UnsignedByteAccessor& operator=(xs::UnsignedByte rhs) {
    setUnsignedByteValue(rhs);
    return *this;
  }

  /** Conversion operator to convert this UnsignedByteAccessor to an xs::UnsignedByte.
    *
    * @return No return specified, this conversion operator returns a xs::UnsignedByte.
    */
  virtual operator xs::UnsignedByte() const {
    return getUnsignedByteValue();
  }

protected:

  /** The constructor [only available to derived classes]. */
  UnsignedByteAccessor() {
  }

  /** The destructor [only available to derived classes]. */
  ~UnsignedByteAccessor() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The UnsignedByteAccessor to copy from.
    */
  UnsignedByteAccessor(const UnsignedByteAccessor& rhs) {
    (void)rhs;
  }

};

} // namespace base
} // namespace uci

#endif // UCI_BASE_UNSIGNEDBYTEACCESSOR_H

