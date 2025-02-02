/** @file ProductOutputCapabilityImageryType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:14 PM
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

#ifndef ASB_UCI_TYPE_PRODUCTOUTPUTCAPABILITYIMAGERYTYPE_H
#define ASB_UCI_TYPE_PRODUCTOUTPUTCAPABILITYIMAGERYTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/ProductOutputType.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ProductOutputCapabilityImageryType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class ComponentControllabilityA_Type;
class CompressionRatioSettingsType;
class PO_ProductGeneratorOutputID_Type;
class ProductRateSettingsType;
class ProductResolutionSettingsType;
class ProductSizeSettingsType;

/** See annotations in child elements and messages/elements that use this type for details. */
class ProductOutputCapabilityImageryType : public virtual uci::type::ProductOutputCapabilityImageryType, public virtual ProductOutputType {
public:
  /** The constructor */
  ProductOutputCapabilityImageryType();

  /** The copy constructor
    *
    * @param rhs The ProductOutputCapabilityImageryType to copy from
    */
  ProductOutputCapabilityImageryType(const ProductOutputCapabilityImageryType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The ProductOutputCapabilityImageryType to move from
    */
  ProductOutputCapabilityImageryType(ProductOutputCapabilityImageryType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The ProductOutputCapabilityImageryType to copy from
    * @return The ProductOutputCapabilityImageryType that was assigned
    */
  ProductOutputCapabilityImageryType& operator=(const ProductOutputCapabilityImageryType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The ProductOutputCapabilityImageryType to move from
    * @return The ProductOutputCapabilityImageryType that was assigned
    */
  ProductOutputCapabilityImageryType& operator=(ProductOutputCapabilityImageryType&& rhs) = delete;

  /** The destructor */
  ~ProductOutputCapabilityImageryType() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ProductOutputCapabilityImageryType whose contents are to be used to set this
    *      uci::type::ProductOutputCapabilityImageryType's contents.
    */
  void copy(const uci::type::ProductOutputCapabilityImageryType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ProductOutputCapabilityImageryType whose contents are to be used to set this
    *      uci::type::ProductOutputCapabilityImageryType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::ProductOutputCapabilityImageryType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the GeneratorOutputID field contained in this message fragment
    *
    * @return The const reference to the accessor to the GeneratorOutputID field.
    */
  const uci::type::PO_ProductGeneratorOutputID_Type& getGeneratorOutputID() const override;

  /** Returns the accessor to the GeneratorOutputID field contained in this message fragment
    *
    * @return The reference to the accessor to the GeneratorOutputID field.
    */
  uci::type::PO_ProductGeneratorOutputID_Type& getGeneratorOutputID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ProductOutputCapabilityImageryType& setGeneratorOutputID(const uci::type::PO_ProductGeneratorOutputID_Type& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CompressionRatioSettingsType& getCompressionRatioSettings_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::CompressionRatioSettingsType& getCompressionRatioSettings() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CompressionRatioSettingsType& getCompressionRatioSettings() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ProductOutputCapabilityImageryType& setCompressionRatioSettings(const uci::type::CompressionRatioSettingsType& accessor) override;

  /** Returns whether this optional field CompressionRatioSettingsis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasCompressionRatioSettings() const noexcept override;

  /** Enables the optional field such that getCompressionRatioSettings will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CompressionRatioSettingsType& enableCompressionRatioSettings(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::ProductOutputCapabilityImageryType& clearCompressionRatioSettings() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ProductRateSettingsType& getProductRateSettings_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ProductRateSettingsType& getProductRateSettings() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ProductRateSettingsType& getProductRateSettings() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ProductOutputCapabilityImageryType& setProductRateSettings(const uci::type::ProductRateSettingsType& accessor) override;

  /** Returns whether this optional field ProductRateSettingsis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasProductRateSettings() const noexcept override;

  /** Enables the optional field such that getProductRateSettings will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ProductRateSettingsType& enableProductRateSettings(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::ProductOutputCapabilityImageryType& clearProductRateSettings() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Boolean getInterlaceability() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ProductOutputCapabilityImageryType& setInterlaceability(xs::Boolean value) override;

  /** Returns whether this optional field Interlaceabilityis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasInterlaceability() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::ProductOutputCapabilityImageryType& clearInterlaceability() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ProductSizeSettingsType& getProductSizeSettings_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ProductSizeSettingsType& getProductSizeSettings() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ProductSizeSettingsType& getProductSizeSettings() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ProductOutputCapabilityImageryType& setProductSizeSettings(const uci::type::ProductSizeSettingsType& accessor) override;

  /** Returns whether this optional field ProductSizeSettingsis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasProductSizeSettings() const noexcept override;

  /** Enables the optional field such that getProductSizeSettings will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ProductSizeSettingsType& enableProductSizeSettings(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::ProductOutputCapabilityImageryType& clearProductSizeSettings() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ProductResolutionSettingsType& getProductResolutionSettings_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ProductResolutionSettingsType& getProductResolutionSettings() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ProductResolutionSettingsType& getProductResolutionSettings() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ProductOutputCapabilityImageryType& setProductResolutionSettings(const uci::type::ProductResolutionSettingsType& accessor) override;

  /** Returns whether this optional field ProductResolutionSettingsis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasProductResolutionSettings() const noexcept override;

  /** Enables the optional field such that getProductResolutionSettings will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ProductResolutionSettingsType& enableProductResolutionSettings(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::ProductOutputCapabilityImageryType& clearProductResolutionSettings() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ComponentControllabilityA_Type& getControllability_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ComponentControllabilityA_Type& getControllability() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ComponentControllabilityA_Type& getControllability() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ProductOutputCapabilityImageryType& setControllability(const uci::type::ComponentControllabilityA_Type& accessor) override;

  /** Returns whether this optional field Controllabilityis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasControllability() const noexcept override;

  /** Enables the optional field such that getControllability will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ComponentControllabilityA_Type& enableControllability(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::ProductOutputCapabilityImageryType& clearControllability() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<ProductOutputCapabilityImageryType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::ProductOutputCapabilityImageryType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::ProductOutputCapabilityImageryType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<PO_ProductGeneratorOutputID_Type> generatorOutputID_Accessor;
  std::unique_ptr<CompressionRatioSettingsType> compressionRatioSettings_Accessor;
  std::unique_ptr<ProductRateSettingsType> productRateSettings_Accessor;
  boost::optional<asb_xs::Boolean> interlaceability_Accessor;
  std::unique_ptr<ProductSizeSettingsType> productSizeSettings_Accessor;
  std::unique_ptr<ProductResolutionSettingsType> productResolutionSettings_Accessor;
  std::unique_ptr<ComponentControllabilityA_Type> controllability_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_PRODUCTOUTPUTCAPABILITYIMAGERYTYPE_H
