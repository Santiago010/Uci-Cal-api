/** @file TimeAccessor.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:11 PM
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

#ifndef ASB_UCI_BASE_TIMEACCESSOR_H
#define ASB_UCI_BASE_TIMEACCESSOR_H

#include <memory>

#include <boost/smart_ptr/make_unique.hpp>

#include "../../asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/TimeAccessor.h"

/**  */
namespace asb_uci {

/** The namespace in which all base data types are declared */
namespace base {

/** The TimeAccessor accessor class is used to provide access to Time data types. */
class TimeAccessor : public virtual uci::base::TimeAccessor {
public:
  /** The constructor */
  TimeAccessor() = default;

  /** The copy constructor
    *
    * @param rhs The TimeAccessor to copy from
    */
  TimeAccessor(const TimeAccessor& rhs) = default;

  /** The move constructor
    *
    * @param rhs The TimeAccessor to move from
    */
  TimeAccessor(TimeAccessor&& rhs) = default;

  /** The assignment operator
    *
    * @param rhs The TimeAccessor to copy from
    * @return The TimeAccessor that was assigned
    */
  TimeAccessor& operator=(const TimeAccessor& rhs) = default;

  /** The move assignment operator
    *
    * @param rhs The TimeAccessor to move from
    * @return The TimeAccessor that was assigned
    */
  TimeAccessor& operator=(TimeAccessor&& rhs) = default;

  /** The destructor */
  virtual ~TimeAccessor() = default;

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  void copy(const uci::base::TimeAccessor& accessor) override {
    copyImpl(accessor, false);
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::base::TimeAccessor& accessor, const bool /*checkIfDerivation*/) {
    if (&accessor != this) {
      data = dynamic_cast<const asb_uci::base::TimeAccessor&>(accessor).data;
    }
  }

  /** Returns the Time accessed by this TimeAccessor.
    *
    * @return The Time accessed by this TimeAccessor.
    */
  xs::Time getTimeValue() const noexcept override {
    return data;
  }

  /** Sets the Time accessed by this TimeAccessor to the specified Time.
    *
    * @param value The Time whose value will be used to set the value of the Time accessed by this accessor.
    * @return A reference to the object on which this method was called.
    */
  uci::base::TimeAccessor& setTimeValue(xs::Time value) noexcept override {
    data = value;
    return *this;
  }

  /** Resets the accessor */
  void reset() noexcept override {
    data = 0;
  }

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<TimeAccessor> create(const uci::base::accessorType::AccessorType /*type*/) {
    return boost::make_unique<TimeAccessor>();
  }

private:
  asb_xs::Time data{0};

};

} // namespace base

} // namespace asb_uci

#endif // ASB_UCI_BASE_TIMEACCESSOR_H
