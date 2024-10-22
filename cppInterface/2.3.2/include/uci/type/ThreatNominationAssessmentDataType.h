/** @file ThreatNominationAssessmentDataType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:08 PM
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

#ifndef UCI_TYPE_THREATNOMINATIONASSESSMENTDATATYPE_H
#define UCI_TYPE_THREATNOMINATIONASSESSMENTDATATYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "ThreatNominationResultType.h"

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

/** The results of an assessment that determines which entity poses the highest threat to a system or systems. */
class ThreatNominationAssessmentDataType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new ThreatNominationAssessmentDataType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ThreatNominationAssessmentDataType.
    */
  static UCI_EXPORT ThreatNominationAssessmentDataType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ThreatNominationAssessmentDataType initializing the data accessed by the new
    * ThreatNominationAssessmentDataType using the data accessed by the specified ThreatNominationAssessmentDataType
    * (cloning).
    *
    * @param accessor The ThreatNominationAssessmentDataType that provides access to the data that is to be used to
    *      initialize the data accessed by the new created ThreatNominationAssessmentDataType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ThreatNominationAssessmentDataType.
    */
  static UCI_EXPORT ThreatNominationAssessmentDataType& create(const ThreatNominationAssessmentDataType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ThreatNominationAssessmentDataType. Use of the specified accessor after it has
    * been destroyed will result in undefined behavior.
    *
    * @param accessor The ThreatNominationAssessmentDataType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ThreatNominationAssessmentDataType& accessor);

  /** Returns this accessor's type constant, i.e. threatNominationAssessmentDataType.
    *
    * @return This accessor's type constant, i.e. threatNominationAssessmentDataType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::threatNominationAssessmentDataType;
  }

  /** Returns the version that was initialized from the uci:version attribute of ThreatNominationAssessmentDataType.
    *
    * @return The version that was initialized from the uci:version attribute of ThreatNominationAssessmentDataType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ThreatNominationAssessmentDataType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * NominationWithoutSuppression.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      NominationWithoutSuppression.
    */
  virtual const uci::type::ThreatNominationResultType& getNominationWithoutSuppression() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * NominationWithoutSuppression.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      NominationWithoutSuppression.
    */
  virtual uci::type::ThreatNominationResultType& getNominationWithoutSuppression() = 0;

  /** Sets the complex content identified by NominationWithoutSuppression to the contents of the complex content accessed
    * by the specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by NominationWithoutSuppression.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ThreatNominationAssessmentDataType& setNominationWithoutSuppression(const uci::type::ThreatNominationResultType& value) = 0;

  /** Returns whether the Element identified by NominationWithoutSuppression exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by NominationWithoutSuppression is enabled or not.
    */
  virtual bool hasNominationWithoutSuppression() const = 0;

  /** Enables the Element identified by NominationWithoutSuppression.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by
    *      NominationWithoutSuppression.
    */
  virtual uci::type::ThreatNominationResultType& enableNominationWithoutSuppression(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by NominationWithoutSuppression.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ThreatNominationAssessmentDataType& clearNominationWithoutSuppression() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * NominationWithSuppression.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      NominationWithSuppression.
    */
  virtual const uci::type::ThreatNominationResultType& getNominationWithSuppression() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * NominationWithSuppression.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      NominationWithSuppression.
    */
  virtual uci::type::ThreatNominationResultType& getNominationWithSuppression() = 0;

  /** Sets the complex content identified by NominationWithSuppression to the contents of the complex content accessed by
    * the specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by NominationWithSuppression.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ThreatNominationAssessmentDataType& setNominationWithSuppression(const uci::type::ThreatNominationResultType& value) = 0;

  /** Returns whether the Element identified by NominationWithSuppression exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by NominationWithSuppression is enabled or not.
    */
  virtual bool hasNominationWithSuppression() const = 0;

  /** Enables the Element identified by NominationWithSuppression.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by
    *      NominationWithSuppression.
    */
  virtual uci::type::ThreatNominationResultType& enableNominationWithSuppression(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by NominationWithSuppression.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ThreatNominationAssessmentDataType& clearNominationWithSuppression() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ThreatNominationAssessmentDataType() {
  }

  /** The destructor [only available to derived classes]. */
  ~ThreatNominationAssessmentDataType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ThreatNominationAssessmentDataType to copy from.
    */
  ThreatNominationAssessmentDataType(const ThreatNominationAssessmentDataType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ThreatNominationAssessmentDataType to the contents of the
    * ThreatNominationAssessmentDataType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The ThreatNominationAssessmentDataType on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this ThreatNominationAssessmentDataType.
    * @return A reference to this ThreatNominationAssessmentDataType.
    */
  ThreatNominationAssessmentDataType& operator=(const ThreatNominationAssessmentDataType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_THREATNOMINATIONASSESSMENTDATATYPE_H

