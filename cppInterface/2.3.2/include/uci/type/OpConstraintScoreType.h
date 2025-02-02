/** @file OpConstraintScoreType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:07 PM
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

#ifndef UCI_TYPE_OPCONSTRAINTSCORETYPE_H
#define UCI_TYPE_OPCONSTRAINTSCORETYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "FileLocationID_Type.h"
#include "OpConstraintEnum.h"
#include "PercentType.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all base data types are declared */
namespace base {

class AbstractServiceBusConnection;

} // namespace base
} // namespace uci

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** Allows for assessment of how well a plan is predicted to accomplish the mission based on the specified operational
  * constraint (scores).
  */
class OpConstraintScoreType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new OpConstraintScoreType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed OpConstraintScoreType.
    */
  static UCI_EXPORT OpConstraintScoreType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new OpConstraintScoreType initializing the data accessed by the new OpConstraintScoreType
    * using the data accessed by the specified OpConstraintScoreType (cloning).
    *
    * @param accessor The OpConstraintScoreType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created OpConstraintScoreType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed OpConstraintScoreType.
    */
  static UCI_EXPORT OpConstraintScoreType& create(const OpConstraintScoreType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified OpConstraintScoreType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The OpConstraintScoreType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(OpConstraintScoreType& accessor);

  /** Returns this accessor's type constant, i.e. opConstraintScoreType.
    *
    * @return This accessor's type constant, i.e. opConstraintScoreType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::opConstraintScoreType;
  }

  /** Returns the version that was initialized from the uci:version attribute of OpConstraintScoreType.
    *
    * @return The version that was initialized from the uci:version attribute of OpConstraintScoreType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const OpConstraintScoreType& accessor) = 0;

  /** Returns a const reference to the value of the enumeration identified by Constraint.
    *
    * @return A const reference to the value of the enumeration identified by Constraint.
    */
  virtual const uci::type::OpConstraintEnum& getConstraint() const = 0;

  /** Returns a reference to the value of the enumeration identified by Constraint.
    *
    * @return A reference to the value of the enumeration identified by Constraint.
    */
  virtual uci::type::OpConstraintEnum& getConstraint() = 0;

  /** Sets the value of the enumeration identified by Constraint.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OpConstraintScoreType& setConstraint(const uci::type::OpConstraintEnum& value) = 0;

  /** Sets the value of the enumeration identified by Constraint.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OpConstraintScoreType& setConstraint(uci::type::OpConstraintEnum::EnumerationItem value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by Score.
    *
    * @return The value of the simple primitive data type identified by Score.
    */
  virtual uci::type::PercentTypeValue getScore() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Score.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OpConstraintScoreType& setScore(uci::type::PercentTypeValue value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by Fidelity.
    *
    * @return The value of the simple primitive data type identified by Fidelity.
    */
  virtual uci::type::PercentTypeValue getFidelity() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Fidelity.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OpConstraintScoreType& setFidelity(uci::type::PercentTypeValue value) = 0;

  /** Returns whether the Element identified by Fidelity exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Fidelity is enabled or not.
    */
  virtual bool hasFidelity() const = 0;

  /** Clears (disabled) the Element identified by Fidelity.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OpConstraintScoreType& clearFidelity() = 0;

  /** Returns the value of the SimplePrimitive data type identified by Confidence.
    *
    * @return The value of the simple primitive data type identified by Confidence.
    */
  virtual uci::type::PercentTypeValue getConfidence() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Confidence.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OpConstraintScoreType& setConfidence(uci::type::PercentTypeValue value) = 0;

  /** Returns whether the Element identified by Confidence exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Confidence is enabled or not.
    */
  virtual bool hasConfidence() const = 0;

  /** Clears (disabled) the Element identified by Confidence.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OpConstraintScoreType& clearConfidence() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by FileLocationID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by FileLocationID.
    */
  virtual const uci::type::FileLocationID_Type& getFileLocationID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by FileLocationID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by FileLocationID.
    */
  virtual uci::type::FileLocationID_Type& getFileLocationID() = 0;

  /** Sets the complex content identified by FileLocationID to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by FileLocationID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OpConstraintScoreType& setFileLocationID(const uci::type::FileLocationID_Type& value) = 0;

  /** Returns whether the Element identified by FileLocationID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by FileLocationID is enabled or not.
    */
  virtual bool hasFileLocationID() const = 0;

  /** Enables the Element identified by FileLocationID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by FileLocationID.
    */
  virtual uci::type::FileLocationID_Type& enableFileLocationID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by FileLocationID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OpConstraintScoreType& clearFileLocationID() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  OpConstraintScoreType() {
  }

  /** The destructor [only available to derived classes]. */
  ~OpConstraintScoreType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The OpConstraintScoreType to copy from.
    */
  OpConstraintScoreType(const OpConstraintScoreType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this OpConstraintScoreType to the contents of the OpConstraintScoreType
    * on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The OpConstraintScoreType on the right hand side (rhs) of the assignment operator whose contents are used
    *      to set the contents of this OpConstraintScoreType.
    * @return A reference to this OpConstraintScoreType.
    */
  OpConstraintScoreType& operator=(const OpConstraintScoreType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_OPCONSTRAINTSCORETYPE_H

