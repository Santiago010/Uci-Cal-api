/** @file SurvivabilityRiskLevelMDT.h
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

#ifndef UCI_TYPE_SURVIVABILITYRISKLEVELMDT_H
#define UCI_TYPE_SURVIVABILITYRISKLEVELMDT_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "SurvivabilityRiskLevelID_Type.h"
#include "SurvivabilityRiskSettingType.h"
#include "SystemID_Type.h"

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

/** See annotations in child elements and messages/elements that use this type for details. */
class SurvivabilityRiskLevelMDT : public virtual uci::base::Accessor {
public:

  /** This method constructs a new SurvivabilityRiskLevelMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SurvivabilityRiskLevelMDT.
    */
  static UCI_EXPORT SurvivabilityRiskLevelMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new SurvivabilityRiskLevelMDT initializing the data accessed by the new
    * SurvivabilityRiskLevelMDT using the data accessed by the specified SurvivabilityRiskLevelMDT (cloning).
    *
    * @param accessor The SurvivabilityRiskLevelMDT that provides access to the data that is to be used to initialize the
    *      data accessed by the new created SurvivabilityRiskLevelMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SurvivabilityRiskLevelMDT.
    */
  static UCI_EXPORT SurvivabilityRiskLevelMDT& create(const SurvivabilityRiskLevelMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified SurvivabilityRiskLevelMDT. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The SurvivabilityRiskLevelMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(SurvivabilityRiskLevelMDT& accessor);

  /** Returns this accessor's type constant, i.e. survivabilityRiskLevelMDT.
    *
    * @return This accessor's type constant, i.e. survivabilityRiskLevelMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::survivabilityRiskLevelMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of SurvivabilityRiskLevelMDT.
    *
    * @return The version that was initialized from the uci:version attribute of SurvivabilityRiskLevelMDT.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const SurvivabilityRiskLevelMDT& accessor) = 0;

  /** Identifies which vehicle this parameter applies to. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::SystemID_Type, uci::type::accessorType::systemID_Type> AppliesToSystemID;

  /** A list of the Risk Settings that govern this particular mission for each provided RiskPriortization (max of 4).
    * [Occurrences: Minimum: 1; Maximum: 4]
    */
  typedef uci::base::BoundedList<uci::type::SurvivabilityRiskSettingType, uci::type::accessorType::survivabilityRiskSettingType> RiskSetting;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * SurvivabilityRiskLevelID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      SurvivabilityRiskLevelID.
    */
  virtual const uci::type::SurvivabilityRiskLevelID_Type& getSurvivabilityRiskLevelID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * SurvivabilityRiskLevelID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      SurvivabilityRiskLevelID.
    */
  virtual uci::type::SurvivabilityRiskLevelID_Type& getSurvivabilityRiskLevelID() = 0;

  /** Sets the complex content identified by SurvivabilityRiskLevelID to the contents of the complex content accessed by
    * the specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by SurvivabilityRiskLevelID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SurvivabilityRiskLevelMDT& setSurvivabilityRiskLevelID(const uci::type::SurvivabilityRiskLevelID_Type& value) = 0;

  /** Returns a const reference to the bounded list identified by AppliesToSystemID.
    *
    * @return A const reference to the bounded list identified by AppliesToSystemID.
    */
  virtual const uci::type::SurvivabilityRiskLevelMDT::AppliesToSystemID& getAppliesToSystemID() const = 0;

  /** Returns a reference to the bounded list identified by AppliesToSystemID.
    *
    * @return A reference to the bounded list identified by AppliesToSystemID.
    */
  virtual uci::type::SurvivabilityRiskLevelMDT::AppliesToSystemID& getAppliesToSystemID() = 0;

  /** Sets the bounded list identified by AppliesToSystemID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SurvivabilityRiskLevelMDT& setAppliesToSystemID(const uci::type::SurvivabilityRiskLevelMDT::AppliesToSystemID& value) = 0;

  /** Returns a const reference to the bounded list identified by RiskSetting.
    *
    * @return A const reference to the bounded list identified by RiskSetting.
    */
  virtual const uci::type::SurvivabilityRiskLevelMDT::RiskSetting& getRiskSetting() const = 0;

  /** Returns a reference to the bounded list identified by RiskSetting.
    *
    * @return A reference to the bounded list identified by RiskSetting.
    */
  virtual uci::type::SurvivabilityRiskLevelMDT::RiskSetting& getRiskSetting() = 0;

  /** Sets the bounded list identified by RiskSetting.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SurvivabilityRiskLevelMDT& setRiskSetting(const uci::type::SurvivabilityRiskLevelMDT::RiskSetting& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  SurvivabilityRiskLevelMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~SurvivabilityRiskLevelMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The SurvivabilityRiskLevelMDT to copy from.
    */
  SurvivabilityRiskLevelMDT(const SurvivabilityRiskLevelMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this SurvivabilityRiskLevelMDT to the contents of the
    * SurvivabilityRiskLevelMDT on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The SurvivabilityRiskLevelMDT on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this SurvivabilityRiskLevelMDT.
    * @return A reference to this SurvivabilityRiskLevelMDT.
    */
  SurvivabilityRiskLevelMDT& operator=(const SurvivabilityRiskLevelMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_SURVIVABILITYRISKLEVELMDT_H

