/** @file GatewayLinkStatisticsType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:13 PM
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

#ifndef ASB_UCI_TYPE_GATEWAYLINKSTATISTICSTYPE_H
#define ASB_UCI_TYPE_GATEWAYLINKSTATISTICSTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/DataRateType.h"
#include "../../../include/asb_uci/type/PercentType.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/GatewayLinkStatisticsType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class CommLinkPortMapType;
class GatewayNativeStatisticsPET;
class NetworkLinkID_Type;

/** Provides a view into the health of a Data Gateway providing feedback regarding Data Flow, Error Rates, and
  * Utilization Percentages.
  */
class GatewayLinkStatisticsType : public virtual uci::type::GatewayLinkStatisticsType {
public:
  /** The constructor */
  GatewayLinkStatisticsType();

  /** The copy constructor
    *
    * @param rhs The GatewayLinkStatisticsType to copy from
    */
  GatewayLinkStatisticsType(const GatewayLinkStatisticsType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The GatewayLinkStatisticsType to move from
    */
  GatewayLinkStatisticsType(GatewayLinkStatisticsType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The GatewayLinkStatisticsType to copy from
    * @return The GatewayLinkStatisticsType that was assigned
    */
  GatewayLinkStatisticsType& operator=(const GatewayLinkStatisticsType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The GatewayLinkStatisticsType to move from
    * @return The GatewayLinkStatisticsType that was assigned
    */
  GatewayLinkStatisticsType& operator=(GatewayLinkStatisticsType&& rhs) = delete;

  /** The destructor */
  virtual ~GatewayLinkStatisticsType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::GatewayLinkStatisticsType whose contents are to be used to set this
    *      uci::type::GatewayLinkStatisticsType's contents.
    */
  void copy(const uci::type::GatewayLinkStatisticsType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::GatewayLinkStatisticsType whose contents are to be used to set this
    *      uci::type::GatewayLinkStatisticsType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::GatewayLinkStatisticsType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::NetworkLinkID_Type& getNetworkLinkID_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::NetworkLinkID_Type& getNetworkLinkID() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::NetworkLinkID_Type& getNetworkLinkID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::GatewayLinkStatisticsType& setNetworkLinkID(const uci::type::NetworkLinkID_Type& accessor) override;

  /** Returns whether this optional field NetworkLinkIDis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasNetworkLinkID() const noexcept override;

  /** Enables the optional field such that getNetworkLinkID will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::NetworkLinkID_Type& enableNetworkLinkID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::GatewayLinkStatisticsType& clearNetworkLinkID() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::PercentTypeValue getGatewayRxUtilization() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::GatewayLinkStatisticsType& setGatewayRxUtilization(uci::type::PercentTypeValue value) override;

  /** Returns whether this optional field GatewayRxUtilizationis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasGatewayRxUtilization() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::GatewayLinkStatisticsType& clearGatewayRxUtilization() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::PercentTypeValue getGatewayTxUtilization() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::GatewayLinkStatisticsType& setGatewayTxUtilization(uci::type::PercentTypeValue value) override;

  /** Returns whether this optional field GatewayTxUtilizationis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasGatewayTxUtilization() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::GatewayLinkStatisticsType& clearGatewayTxUtilization() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::PercentTypeValue getRxDataErrorRate() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::GatewayLinkStatisticsType& setRxDataErrorRate(uci::type::PercentTypeValue value) override;

  /** Returns whether this optional field RxDataErrorRateis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasRxDataErrorRate() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::GatewayLinkStatisticsType& clearRxDataErrorRate() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::DataRateTypeValue getRxDataRate() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::GatewayLinkStatisticsType& setRxDataRate(uci::type::DataRateTypeValue value) override;

  /** Returns whether this optional field RxDataRateis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasRxDataRate() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::GatewayLinkStatisticsType& clearRxDataRate() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::PercentTypeValue getRxMessageErrorRate() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::GatewayLinkStatisticsType& setRxMessageErrorRate(uci::type::PercentTypeValue value) override;

  /** Returns whether this optional field RxMessageErrorRateis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasRxMessageErrorRate() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::GatewayLinkStatisticsType& clearRxMessageErrorRate() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Double getRxMessageRate() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::GatewayLinkStatisticsType& setRxMessageRate(xs::Double value) override;

  /** Returns whether this optional field RxMessageRateis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasRxMessageRate() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::GatewayLinkStatisticsType& clearRxMessageRate() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::PercentTypeValue getTxDataErrorRate() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::GatewayLinkStatisticsType& setTxDataErrorRate(uci::type::PercentTypeValue value) override;

  /** Returns whether this optional field TxDataErrorRateis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasTxDataErrorRate() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::GatewayLinkStatisticsType& clearTxDataErrorRate() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::DataRateTypeValue getTxDataRate() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::GatewayLinkStatisticsType& setTxDataRate(uci::type::DataRateTypeValue value) override;

  /** Returns whether this optional field TxDataRateis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasTxDataRate() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::GatewayLinkStatisticsType& clearTxDataRate() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::PercentTypeValue getTxMessageErrorRate() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::GatewayLinkStatisticsType& setTxMessageErrorRate(uci::type::PercentTypeValue value) override;

  /** Returns whether this optional field TxMessageErrorRateis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasTxMessageErrorRate() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::GatewayLinkStatisticsType& clearTxMessageErrorRate() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Double getTxMessageRate() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::GatewayLinkStatisticsType& setTxMessageRate(xs::Double value) override;

  /** Returns whether this optional field TxMessageRateis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasTxMessageRate() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::GatewayLinkStatisticsType& clearTxMessageRate() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommLinkPortMapType& getLinkPortMap_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::CommLinkPortMapType& getLinkPortMap() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommLinkPortMapType& getLinkPortMap() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::GatewayLinkStatisticsType& setLinkPortMap(const uci::type::CommLinkPortMapType& accessor) override;

  /** Returns whether this optional field LinkPortMapis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasLinkPortMap() const noexcept override;

  /** Enables the optional field such that getLinkPortMap will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommLinkPortMapType& enableLinkPortMap(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::GatewayLinkStatisticsType& clearLinkPortMap() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::GatewayNativeStatisticsPET& getDataLinkNativeStatistics_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::GatewayNativeStatisticsPET& getDataLinkNativeStatistics() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::GatewayNativeStatisticsPET& getDataLinkNativeStatistics() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::GatewayLinkStatisticsType& setDataLinkNativeStatistics(const uci::type::GatewayNativeStatisticsPET& accessor) override;

  /** Returns whether this optional field DataLinkNativeStatisticsis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasDataLinkNativeStatistics() const noexcept override;

  /** Enables the optional field such that getDataLinkNativeStatistics will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::GatewayNativeStatisticsPET& enableDataLinkNativeStatistics(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::GatewayLinkStatisticsType& clearDataLinkNativeStatistics() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<GatewayLinkStatisticsType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::GatewayLinkStatisticsType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

  /** 
    *
    * @param accessor .
    * @param propTree .
    * @param nodeName .
    * @param createNode .
    * @param addTypeAttribute .
    * @param checkIfDerivation .
    * @param topLevel .
    * @return .
    */
  static std::string serialize(const uci::type::GatewayLinkStatisticsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<NetworkLinkID_Type> networkLinkID_Accessor;
  boost::optional<PercentTypeValue> gatewayRxUtilization_Accessor;
  boost::optional<PercentTypeValue> gatewayTxUtilization_Accessor;
  boost::optional<PercentTypeValue> rxDataErrorRate_Accessor;
  boost::optional<DataRateTypeValue> rxDataRate_Accessor;
  boost::optional<PercentTypeValue> rxMessageErrorRate_Accessor;
  boost::optional<asb_xs::Double> rxMessageRate_Accessor;
  boost::optional<PercentTypeValue> txDataErrorRate_Accessor;
  boost::optional<DataRateTypeValue> txDataRate_Accessor;
  boost::optional<PercentTypeValue> txMessageErrorRate_Accessor;
  boost::optional<asb_xs::Double> txMessageRate_Accessor;
  std::unique_ptr<CommLinkPortMapType> linkPortMap_Accessor;
  std::unique_ptr<GatewayNativeStatisticsPET> dataLinkNativeStatistics_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_GATEWAYLINKSTATISTICSTYPE_H
