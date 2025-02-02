/** @file GatewayLinkStatisticsType.h
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

#ifndef UCI_TYPE_GATEWAYLINKSTATISTICSTYPE_H
#define UCI_TYPE_GATEWAYLINKSTATISTICSTYPE_H

#include "../base/Accessor.h"
#include "../base/DoubleAccessor.h"
#include "../base/export.h"
#include "CommLinkPortMapType.h"
#include "DataRateType.h"
#include "GatewayNativeStatisticsPET.h"
#include "NetworkLinkID_Type.h"
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

/** Provides a view into the health of a Data Gateway providing feedback regarding Data Flow, Error Rates, and
  * Utilization Percentages.
  */
class GatewayLinkStatisticsType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new GatewayLinkStatisticsType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed GatewayLinkStatisticsType.
    */
  static UCI_EXPORT GatewayLinkStatisticsType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new GatewayLinkStatisticsType initializing the data accessed by the new
    * GatewayLinkStatisticsType using the data accessed by the specified GatewayLinkStatisticsType (cloning).
    *
    * @param accessor The GatewayLinkStatisticsType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created GatewayLinkStatisticsType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed GatewayLinkStatisticsType.
    */
  static UCI_EXPORT GatewayLinkStatisticsType& create(const GatewayLinkStatisticsType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified GatewayLinkStatisticsType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The GatewayLinkStatisticsType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(GatewayLinkStatisticsType& accessor);

  /** Returns this accessor's type constant, i.e. gatewayLinkStatisticsType.
    *
    * @return This accessor's type constant, i.e. gatewayLinkStatisticsType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::gatewayLinkStatisticsType;
  }

  /** Returns the version that was initialized from the uci:version attribute of GatewayLinkStatisticsType.
    *
    * @return The version that was initialized from the uci:version attribute of GatewayLinkStatisticsType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const GatewayLinkStatisticsType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by NetworkLinkID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by NetworkLinkID.
    */
  virtual const uci::type::NetworkLinkID_Type& getNetworkLinkID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by NetworkLinkID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by NetworkLinkID.
    */
  virtual uci::type::NetworkLinkID_Type& getNetworkLinkID() = 0;

  /** Sets the complex content identified by NetworkLinkID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by NetworkLinkID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayLinkStatisticsType& setNetworkLinkID(const uci::type::NetworkLinkID_Type& value) = 0;

  /** Returns whether the Element identified by NetworkLinkID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by NetworkLinkID is enabled or not.
    */
  virtual bool hasNetworkLinkID() const = 0;

  /** Enables the Element identified by NetworkLinkID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by NetworkLinkID.
    */
  virtual uci::type::NetworkLinkID_Type& enableNetworkLinkID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by NetworkLinkID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayLinkStatisticsType& clearNetworkLinkID() = 0;

  /** Returns the value of the SimplePrimitive data type identified by GatewayRxUtilization.
    *
    * @return The value of the simple primitive data type identified by GatewayRxUtilization.
    */
  virtual uci::type::PercentTypeValue getGatewayRxUtilization() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by GatewayRxUtilization.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayLinkStatisticsType& setGatewayRxUtilization(uci::type::PercentTypeValue value) = 0;

  /** Returns whether the Element identified by GatewayRxUtilization exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by GatewayRxUtilization is enabled or not.
    */
  virtual bool hasGatewayRxUtilization() const = 0;

  /** Clears (disabled) the Element identified by GatewayRxUtilization.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayLinkStatisticsType& clearGatewayRxUtilization() = 0;

  /** Returns the value of the SimplePrimitive data type identified by GatewayTxUtilization.
    *
    * @return The value of the simple primitive data type identified by GatewayTxUtilization.
    */
  virtual uci::type::PercentTypeValue getGatewayTxUtilization() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by GatewayTxUtilization.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayLinkStatisticsType& setGatewayTxUtilization(uci::type::PercentTypeValue value) = 0;

  /** Returns whether the Element identified by GatewayTxUtilization exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by GatewayTxUtilization is enabled or not.
    */
  virtual bool hasGatewayTxUtilization() const = 0;

  /** Clears (disabled) the Element identified by GatewayTxUtilization.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayLinkStatisticsType& clearGatewayTxUtilization() = 0;

  /** Returns the value of the SimplePrimitive data type identified by RxDataErrorRate.
    *
    * @return The value of the simple primitive data type identified by RxDataErrorRate.
    */
  virtual uci::type::PercentTypeValue getRxDataErrorRate() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by RxDataErrorRate.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayLinkStatisticsType& setRxDataErrorRate(uci::type::PercentTypeValue value) = 0;

  /** Returns whether the Element identified by RxDataErrorRate exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by RxDataErrorRate is enabled or not.
    */
  virtual bool hasRxDataErrorRate() const = 0;

  /** Clears (disabled) the Element identified by RxDataErrorRate.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayLinkStatisticsType& clearRxDataErrorRate() = 0;

  /** Returns the value of the SimplePrimitive data type identified by RxDataRate.
    *
    * @return The value of the simple primitive data type identified by RxDataRate.
    */
  virtual uci::type::DataRateTypeValue getRxDataRate() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by RxDataRate.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayLinkStatisticsType& setRxDataRate(uci::type::DataRateTypeValue value) = 0;

  /** Returns whether the Element identified by RxDataRate exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by RxDataRate is enabled or not.
    */
  virtual bool hasRxDataRate() const = 0;

  /** Clears (disabled) the Element identified by RxDataRate.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayLinkStatisticsType& clearRxDataRate() = 0;

  /** Returns the value of the SimplePrimitive data type identified by RxMessageErrorRate.
    *
    * @return The value of the simple primitive data type identified by RxMessageErrorRate.
    */
  virtual uci::type::PercentTypeValue getRxMessageErrorRate() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by RxMessageErrorRate.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayLinkStatisticsType& setRxMessageErrorRate(uci::type::PercentTypeValue value) = 0;

  /** Returns whether the Element identified by RxMessageErrorRate exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by RxMessageErrorRate is enabled or not.
    */
  virtual bool hasRxMessageErrorRate() const = 0;

  /** Clears (disabled) the Element identified by RxMessageErrorRate.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayLinkStatisticsType& clearRxMessageErrorRate() = 0;

  /** Returns the value of the SimplePrimitive data type identified by RxMessageRate.
    *
    * @return The value of the simple primitive data type identified by RxMessageRate.
    */
  virtual xs::Double getRxMessageRate() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by RxMessageRate.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayLinkStatisticsType& setRxMessageRate(xs::Double value) = 0;

  /** Returns whether the Element identified by RxMessageRate exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by RxMessageRate is enabled or not.
    */
  virtual bool hasRxMessageRate() const = 0;

  /** Clears (disabled) the Element identified by RxMessageRate.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayLinkStatisticsType& clearRxMessageRate() = 0;

  /** Returns the value of the SimplePrimitive data type identified by TxDataErrorRate.
    *
    * @return The value of the simple primitive data type identified by TxDataErrorRate.
    */
  virtual uci::type::PercentTypeValue getTxDataErrorRate() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by TxDataErrorRate.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayLinkStatisticsType& setTxDataErrorRate(uci::type::PercentTypeValue value) = 0;

  /** Returns whether the Element identified by TxDataErrorRate exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by TxDataErrorRate is enabled or not.
    */
  virtual bool hasTxDataErrorRate() const = 0;

  /** Clears (disabled) the Element identified by TxDataErrorRate.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayLinkStatisticsType& clearTxDataErrorRate() = 0;

  /** Returns the value of the SimplePrimitive data type identified by TxDataRate.
    *
    * @return The value of the simple primitive data type identified by TxDataRate.
    */
  virtual uci::type::DataRateTypeValue getTxDataRate() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by TxDataRate.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayLinkStatisticsType& setTxDataRate(uci::type::DataRateTypeValue value) = 0;

  /** Returns whether the Element identified by TxDataRate exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by TxDataRate is enabled or not.
    */
  virtual bool hasTxDataRate() const = 0;

  /** Clears (disabled) the Element identified by TxDataRate.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayLinkStatisticsType& clearTxDataRate() = 0;

  /** Returns the value of the SimplePrimitive data type identified by TxMessageErrorRate.
    *
    * @return The value of the simple primitive data type identified by TxMessageErrorRate.
    */
  virtual uci::type::PercentTypeValue getTxMessageErrorRate() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by TxMessageErrorRate.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayLinkStatisticsType& setTxMessageErrorRate(uci::type::PercentTypeValue value) = 0;

  /** Returns whether the Element identified by TxMessageErrorRate exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by TxMessageErrorRate is enabled or not.
    */
  virtual bool hasTxMessageErrorRate() const = 0;

  /** Clears (disabled) the Element identified by TxMessageErrorRate.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayLinkStatisticsType& clearTxMessageErrorRate() = 0;

  /** Returns the value of the SimplePrimitive data type identified by TxMessageRate.
    *
    * @return The value of the simple primitive data type identified by TxMessageRate.
    */
  virtual xs::Double getTxMessageRate() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by TxMessageRate.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayLinkStatisticsType& setTxMessageRate(xs::Double value) = 0;

  /** Returns whether the Element identified by TxMessageRate exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by TxMessageRate is enabled or not.
    */
  virtual bool hasTxMessageRate() const = 0;

  /** Clears (disabled) the Element identified by TxMessageRate.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayLinkStatisticsType& clearTxMessageRate() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by LinkPortMap.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by LinkPortMap.
    */
  virtual const uci::type::CommLinkPortMapType& getLinkPortMap() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by LinkPortMap.
    *
    * @return A reference to the accessor that provides access to the complex content identified by LinkPortMap.
    */
  virtual uci::type::CommLinkPortMapType& getLinkPortMap() = 0;

  /** Sets the complex content identified by LinkPortMap to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by LinkPortMap.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayLinkStatisticsType& setLinkPortMap(const uci::type::CommLinkPortMapType& value) = 0;

  /** Returns whether the Element identified by LinkPortMap exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by LinkPortMap is enabled or not.
    */
  virtual bool hasLinkPortMap() const = 0;

  /** Enables the Element identified by LinkPortMap.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by LinkPortMap.
    */
  virtual uci::type::CommLinkPortMapType& enableLinkPortMap(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by LinkPortMap.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayLinkStatisticsType& clearLinkPortMap() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * DataLinkNativeStatistics.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      DataLinkNativeStatistics.
    */
  virtual const uci::type::GatewayNativeStatisticsPET& getDataLinkNativeStatistics() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * DataLinkNativeStatistics.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      DataLinkNativeStatistics.
    */
  virtual uci::type::GatewayNativeStatisticsPET& getDataLinkNativeStatistics() = 0;

  /** Sets the complex content identified by DataLinkNativeStatistics to the contents of the complex content accessed by
    * the specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by DataLinkNativeStatistics.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayLinkStatisticsType& setDataLinkNativeStatistics(const uci::type::GatewayNativeStatisticsPET& value) = 0;

  /** Returns whether the Element identified by DataLinkNativeStatistics exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by DataLinkNativeStatistics is enabled or not.
    */
  virtual bool hasDataLinkNativeStatistics() const = 0;

  /** Enables the Element identified by DataLinkNativeStatistics.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by
    *      DataLinkNativeStatistics.
    */
  virtual uci::type::GatewayNativeStatisticsPET& enableDataLinkNativeStatistics(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by DataLinkNativeStatistics.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GatewayLinkStatisticsType& clearDataLinkNativeStatistics() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  GatewayLinkStatisticsType() {
  }

  /** The destructor [only available to derived classes]. */
  ~GatewayLinkStatisticsType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The GatewayLinkStatisticsType to copy from.
    */
  GatewayLinkStatisticsType(const GatewayLinkStatisticsType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this GatewayLinkStatisticsType to the contents of the
    * GatewayLinkStatisticsType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The GatewayLinkStatisticsType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this GatewayLinkStatisticsType.
    * @return A reference to this GatewayLinkStatisticsType.
    */
  GatewayLinkStatisticsType& operator=(const GatewayLinkStatisticsType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_GATEWAYLINKSTATISTICSTYPE_H

