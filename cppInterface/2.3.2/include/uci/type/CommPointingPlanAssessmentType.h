/** @file CommPointingPlanAssessmentType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:06 PM
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

#ifndef UCI_TYPE_COMMPOINTINGPLANASSESSMENTTYPE_H
#define UCI_TYPE_COMMPOINTINGPLANASSESSMENTTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "CommPointingPlanDataType.h"
#include "CommPointingPlanRequestType.h"

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

/** Base data structure containing both the inputs and outputs for a Comm Pointing Assessment. */
class CommPointingPlanAssessmentType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new CommPointingPlanAssessmentType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CommPointingPlanAssessmentType.
    */
  static UCI_EXPORT CommPointingPlanAssessmentType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new CommPointingPlanAssessmentType initializing the data accessed by the new
    * CommPointingPlanAssessmentType using the data accessed by the specified CommPointingPlanAssessmentType (cloning).
    *
    * @param accessor The CommPointingPlanAssessmentType that provides access to the data that is to be used to initialize
    *      the data accessed by the new created CommPointingPlanAssessmentType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CommPointingPlanAssessmentType.
    */
  static UCI_EXPORT CommPointingPlanAssessmentType& create(const CommPointingPlanAssessmentType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified CommPointingPlanAssessmentType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The CommPointingPlanAssessmentType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(CommPointingPlanAssessmentType& accessor);

  /** Returns this accessor's type constant, i.e. commPointingPlanAssessmentType.
    *
    * @return This accessor's type constant, i.e. commPointingPlanAssessmentType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::commPointingPlanAssessmentType;
  }

  /** Returns the version that was initialized from the uci:version attribute of CommPointingPlanAssessmentType.
    *
    * @return The version that was initialized from the uci:version attribute of CommPointingPlanAssessmentType.
    */
  static std::string getUCITypeVersion() {
    return "003.000.002.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const CommPointingPlanAssessmentType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Parameters.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Parameters.
    */
  virtual const uci::type::CommPointingPlanRequestType& getParameters() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Parameters.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Parameters.
    */
  virtual uci::type::CommPointingPlanRequestType& getParameters() = 0;

  /** Sets the complex content identified by Parameters to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Parameters.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommPointingPlanAssessmentType& setParameters(const uci::type::CommPointingPlanRequestType& value) = 0;

  /** Returns whether the Element identified by Parameters exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Parameters is enabled or not.
    */
  virtual bool hasParameters() const = 0;

  /** Enables the Element identified by Parameters.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Parameters.
    */
  virtual uci::type::CommPointingPlanRequestType& enableParameters(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Parameters.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommPointingPlanAssessmentType& clearParameters() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Data.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Data.
    */
  virtual const uci::type::CommPointingPlanDataType& getData() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Data.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Data.
    */
  virtual uci::type::CommPointingPlanDataType& getData() = 0;

  /** Sets the complex content identified by Data to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Data.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommPointingPlanAssessmentType& setData(const uci::type::CommPointingPlanDataType& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  CommPointingPlanAssessmentType() {
  }

  /** The destructor [only available to derived classes]. */
  ~CommPointingPlanAssessmentType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The CommPointingPlanAssessmentType to copy from.
    */
  CommPointingPlanAssessmentType(const CommPointingPlanAssessmentType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this CommPointingPlanAssessmentType to the contents of the
    * CommPointingPlanAssessmentType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The CommPointingPlanAssessmentType on the right hand side (rhs) of the assignment operator whose contents
    *      are used to set the contents of this CommPointingPlanAssessmentType.
    * @return A reference to this CommPointingPlanAssessmentType.
    */
  CommPointingPlanAssessmentType& operator=(const CommPointingPlanAssessmentType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_COMMPOINTINGPLANASSESSMENTTYPE_H

