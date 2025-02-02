/** @file ProductProcessingRequestMDT.h
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

#ifndef UCI_TYPE_PRODUCTPROCESSINGREQUESTMDT_H
#define UCI_TYPE_PRODUCTPROCESSINGREQUESTMDT_H

#include "../base/export.h"
#include "CapabilityID_Type.h"
#include "ComparableRankingType.h"
#include "DownloadPriorityEnum.h"
#include "ID_Type.h"
#include "ProcessingRequirementsType.h"
#include "RequestBaseType.h"
#include "SystemID_Type.h"
#include "TraceabilityType.h"

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
class ProductProcessingRequestMDT : public virtual RequestBaseType {
public:

  /** This method constructs a new ProductProcessingRequestMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ProductProcessingRequestMDT.
    */
  static UCI_EXPORT ProductProcessingRequestMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ProductProcessingRequestMDT initializing the data accessed by the new
    * ProductProcessingRequestMDT using the data accessed by the specified ProductProcessingRequestMDT (cloning).
    *
    * @param accessor The ProductProcessingRequestMDT that provides access to the data that is to be used to initialize the
    *      data accessed by the new created ProductProcessingRequestMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ProductProcessingRequestMDT.
    */
  static UCI_EXPORT ProductProcessingRequestMDT& create(const ProductProcessingRequestMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ProductProcessingRequestMDT. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The ProductProcessingRequestMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ProductProcessingRequestMDT& accessor);

  /** Returns this accessor's type constant, i.e. productProcessingRequestMDT.
    *
    * @return This accessor's type constant, i.e. productProcessingRequestMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::productProcessingRequestMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of ProductProcessingRequestMDT.
    *
    * @return The version that was initialized from the uci:version attribute of ProductProcessingRequestMDT.
    */
  static std::string getUCITypeVersion() {
    return "003.001.002.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ProductProcessingRequestMDT& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by FunctionID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by FunctionID.
    */
  virtual const uci::type::ID_Type& getFunctionID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by FunctionID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by FunctionID.
    */
  virtual uci::type::ID_Type& getFunctionID() = 0;

  /** Sets the complex content identified by FunctionID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by FunctionID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingRequestMDT& setFunctionID(const uci::type::ID_Type& value) = 0;

  /** Returns whether the Element identified by FunctionID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by FunctionID is enabled or not.
    */
  virtual bool hasFunctionID() const = 0;

  /** Enables the Element identified by FunctionID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by FunctionID.
    */
  virtual uci::type::ID_Type& enableFunctionID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by FunctionID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingRequestMDT& clearFunctionID() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by SystemID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by SystemID.
    */
  virtual const uci::type::SystemID_Type& getSystemID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by SystemID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by SystemID.
    */
  virtual uci::type::SystemID_Type& getSystemID() = 0;

  /** Sets the complex content identified by SystemID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by SystemID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingRequestMDT& setSystemID(const uci::type::SystemID_Type& value) = 0;

  /** Returns whether the Element identified by SystemID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by SystemID is enabled or not.
    */
  virtual bool hasSystemID() const = 0;

  /** Enables the Element identified by SystemID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by SystemID.
    */
  virtual uci::type::SystemID_Type& enableSystemID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by SystemID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingRequestMDT& clearSystemID() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by CapabilityID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by CapabilityID.
    */
  virtual const uci::type::CapabilityID_Type& getCapabilityID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by CapabilityID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by CapabilityID.
    */
  virtual uci::type::CapabilityID_Type& getCapabilityID() = 0;

  /** Sets the complex content identified by CapabilityID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by CapabilityID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingRequestMDT& setCapabilityID(const uci::type::CapabilityID_Type& value) = 0;

  /** Returns whether the Element identified by CapabilityID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by CapabilityID is enabled or not.
    */
  virtual bool hasCapabilityID() const = 0;

  /** Enables the Element identified by CapabilityID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by CapabilityID.
    */
  virtual uci::type::CapabilityID_Type& enableCapabilityID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by CapabilityID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingRequestMDT& clearCapabilityID() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Traceability.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Traceability.
    */
  virtual const uci::type::TraceabilityType& getTraceability() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Traceability.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Traceability.
    */
  virtual uci::type::TraceabilityType& getTraceability() = 0;

  /** Sets the complex content identified by Traceability to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Traceability.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingRequestMDT& setTraceability(const uci::type::TraceabilityType& value) = 0;

  /** Returns whether the Element identified by Traceability exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Traceability is enabled or not.
    */
  virtual bool hasTraceability() const = 0;

  /** Enables the Element identified by Traceability.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Traceability.
    */
  virtual uci::type::TraceabilityType& enableTraceability(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Traceability.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingRequestMDT& clearTraceability() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Rank.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Rank.
    */
  virtual const uci::type::ComparableRankingType& getRank() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Rank.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Rank.
    */
  virtual uci::type::ComparableRankingType& getRank() = 0;

  /** Sets the complex content identified by Rank to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Rank.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingRequestMDT& setRank(const uci::type::ComparableRankingType& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by PreemptLowerRank.
    *
    * @return A const reference to the value of the enumeration identified by PreemptLowerRank.
    */
  virtual const uci::type::DownloadPriorityEnum& getPreemptLowerRank() const = 0;

  /** Returns a reference to the value of the enumeration identified by PreemptLowerRank.
    *
    * @return A reference to the value of the enumeration identified by PreemptLowerRank.
    */
  virtual uci::type::DownloadPriorityEnum& getPreemptLowerRank() = 0;

  /** Sets the value of the enumeration identified by PreemptLowerRank.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingRequestMDT& setPreemptLowerRank(const uci::type::DownloadPriorityEnum& value) = 0;

  /** Sets the value of the enumeration identified by PreemptLowerRank.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingRequestMDT& setPreemptLowerRank(uci::type::DownloadPriorityEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * ProcessingRequirements.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      ProcessingRequirements.
    */
  virtual const uci::type::ProcessingRequirementsType& getProcessingRequirements() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ProcessingRequirements.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ProcessingRequirements.
    */
  virtual uci::type::ProcessingRequirementsType& getProcessingRequirements() = 0;

  /** Sets the complex content identified by ProcessingRequirements to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ProcessingRequirements.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductProcessingRequestMDT& setProcessingRequirements(const uci::type::ProcessingRequirementsType& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ProductProcessingRequestMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~ProductProcessingRequestMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ProductProcessingRequestMDT to copy from.
    */
  ProductProcessingRequestMDT(const ProductProcessingRequestMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ProductProcessingRequestMDT to the contents of the
    * ProductProcessingRequestMDT on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The ProductProcessingRequestMDT on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this ProductProcessingRequestMDT.
    * @return A reference to this ProductProcessingRequestMDT.
    */
  ProductProcessingRequestMDT& operator=(const ProductProcessingRequestMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_PRODUCTPROCESSINGREQUESTMDT_H

