/** @file DMPI_DesignationRequestMDT.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:12 PM
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

#ifndef ASB_UCI_TYPE_DMPI_DESIGNATIONREQUESTMDT_H
#define ASB_UCI_TYPE_DMPI_DESIGNATIONREQUESTMDT_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/DateTimeType.h"
#include "../../../include/asb_uci/type/RequestBaseType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DMPI_DesignationRequestMDT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class AvailableWeaponsType;
class PixelReferenceCoordinateType;
class Point2D_Type;
class ProductMetadataID_Type;
class RecommendedWeaponsType;
class TaskID_Type;

/** See annotations in child elements and messages/elements that use this type for details. */
class DMPI_DesignationRequestMDT : public virtual uci::type::DMPI_DesignationRequestMDT, public virtual RequestBaseType {
public:
  /** Indicates the IDs of the data product from which this DMPI designation should be derived. It should be considered
    * required in cases where the DMPI designation requestor expects specific data products to be used to create the DMPI
    * designation, such as dynamic targeting scenarios with freshly collected sensor products. It is optional to support
    * use cases where products aren't used to create the DMPI designation and/or the selection of products is left to the
    * designator to select. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using ProductMetadataID = asb_uci::base::BoundedList<uci::type::ProductMetadataID_Type, uci::type::accessorType::productMetadataID_Type, asb_uci::type::ProductMetadataID_Type>;

  /** Indicates a recommendation on the type and quantity of weapons to use when targeting and creating DMPIs.
    * [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using RecommendedWeapons = asb_uci::base::BoundedList<uci::type::RecommendedWeaponsType, uci::type::accessorType::recommendedWeaponsType, asb_uci::type::RecommendedWeaponsType>;

  /** Indicates a constraint on the type and quantity of weapons available (or to be used) when targeting and creating
    * DMPIs. It is optional for cases when the system/node creating DMPIs has direct awareness of the plans and weapon
    * type/quantity of the strike Systems and/or the requestor has deferred the selection. When specified, this element is
    * considered a targeting constraint to be used regardless of other weapon type/quantity information that may be
    * available. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using AvailableWeapons = asb_uci::base::BoundedList<uci::type::AvailableWeaponsType, uci::type::accessorType::availableWeaponsType, asb_uci::type::AvailableWeaponsType>;

  /** The constructor */
  DMPI_DesignationRequestMDT();

  /** The copy constructor
    *
    * @param rhs The DMPI_DesignationRequestMDT to copy from
    */
  DMPI_DesignationRequestMDT(const DMPI_DesignationRequestMDT& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The DMPI_DesignationRequestMDT to move from
    */
  DMPI_DesignationRequestMDT(DMPI_DesignationRequestMDT&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The DMPI_DesignationRequestMDT to copy from
    * @return The DMPI_DesignationRequestMDT that was assigned
    */
  DMPI_DesignationRequestMDT& operator=(const DMPI_DesignationRequestMDT& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The DMPI_DesignationRequestMDT to move from
    * @return The DMPI_DesignationRequestMDT that was assigned
    */
  DMPI_DesignationRequestMDT& operator=(DMPI_DesignationRequestMDT&& rhs) = delete;

  /** The destructor */
  ~DMPI_DesignationRequestMDT() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::DMPI_DesignationRequestMDT whose contents are to be used to set this
    *      uci::type::DMPI_DesignationRequestMDT's contents.
    */
  void copy(const uci::type::DMPI_DesignationRequestMDT& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::DMPI_DesignationRequestMDT whose contents are to be used to set this
    *      uci::type::DMPI_DesignationRequestMDT's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::DMPI_DesignationRequestMDT& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the TaskID field contained in this message fragment
    *
    * @return The const reference to the accessor to the TaskID field.
    */
  const uci::type::TaskID_Type& getTaskID() const override;

  /** Returns the accessor to the TaskID field contained in this message fragment
    *
    * @return The reference to the accessor to the TaskID field.
    */
  uci::type::TaskID_Type& getTaskID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::DMPI_DesignationRequestMDT& setTaskID(const uci::type::TaskID_Type& accessor) override;

  /** Returns the accessor to the ProductMetadataID field contained in this message fragment
    *
    * @return The const reference to the accessor to the ProductMetadataID field.
    */
  const uci::type::DMPI_DesignationRequestMDT::ProductMetadataID& getProductMetadataID() const override;

  /** Returns the accessor to the ProductMetadataID field contained in this message fragment
    *
    * @return The reference to the accessor to the ProductMetadataID field.
    */
  uci::type::DMPI_DesignationRequestMDT::ProductMetadataID& getProductMetadataID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::DMPI_DesignationRequestMDT& setProductMetadataID(const uci::type::DMPI_DesignationRequestMDT::ProductMetadataID& accessor) override;

  /** Returns the accessor to the RecommendedWeapons field contained in this message fragment
    *
    * @return The const reference to the accessor to the RecommendedWeapons field.
    */
  const uci::type::DMPI_DesignationRequestMDT::RecommendedWeapons& getRecommendedWeapons() const override;

  /** Returns the accessor to the RecommendedWeapons field contained in this message fragment
    *
    * @return The reference to the accessor to the RecommendedWeapons field.
    */
  uci::type::DMPI_DesignationRequestMDT::RecommendedWeapons& getRecommendedWeapons() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::DMPI_DesignationRequestMDT& setRecommendedWeapons(const uci::type::DMPI_DesignationRequestMDT::RecommendedWeapons& accessor) override;

  /** Returns the accessor to the AvailableWeapons field contained in this message fragment
    *
    * @return The const reference to the accessor to the AvailableWeapons field.
    */
  const uci::type::DMPI_DesignationRequestMDT::AvailableWeapons& getAvailableWeapons() const override;

  /** Returns the accessor to the AvailableWeapons field contained in this message fragment
    *
    * @return The reference to the accessor to the AvailableWeapons field.
    */
  uci::type::DMPI_DesignationRequestMDT::AvailableWeapons& getAvailableWeapons() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::DMPI_DesignationRequestMDT& setAvailableWeapons(const uci::type::DMPI_DesignationRequestMDT::AvailableWeapons& accessor) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::DateTimeTypeValue getRespondBy() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::DMPI_DesignationRequestMDT& setRespondBy(uci::type::DateTimeTypeValue value) override;

  /** Returns whether this optional field RespondByis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasRespondBy() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::DMPI_DesignationRequestMDT& clearRespondBy() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::Point2D_Type& getProposedDMPI_Coordinates_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::Point2D_Type& getProposedDMPI_Coordinates() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::Point2D_Type& getProposedDMPI_Coordinates() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::DMPI_DesignationRequestMDT& setProposedDMPI_Coordinates(const uci::type::Point2D_Type& accessor) override;

  /** Returns whether this optional field ProposedDMPI_Coordinatesis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasProposedDMPI_Coordinates() const noexcept override;

  /** Enables the optional field such that getProposedDMPI_Coordinates will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::Point2D_Type& enableProposedDMPI_Coordinates(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::DMPI_DesignationRequestMDT& clearProposedDMPI_Coordinates() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PixelReferenceCoordinateType& getReferencePixelCoordinate_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::PixelReferenceCoordinateType& getReferencePixelCoordinate() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PixelReferenceCoordinateType& getReferencePixelCoordinate() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::DMPI_DesignationRequestMDT& setReferencePixelCoordinate(const uci::type::PixelReferenceCoordinateType& accessor) override;

  /** Returns whether this optional field ReferencePixelCoordinateis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasReferencePixelCoordinate() const noexcept override;

  /** Enables the optional field such that getReferencePixelCoordinate will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PixelReferenceCoordinateType& enableReferencePixelCoordinate(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::DMPI_DesignationRequestMDT& clearReferencePixelCoordinate() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<DMPI_DesignationRequestMDT> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::DMPI_DesignationRequestMDT& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::DMPI_DesignationRequestMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<TaskID_Type> taskID_Accessor;
  std::unique_ptr<ProductMetadataID> productMetadataID_Accessor;
  std::unique_ptr<RecommendedWeapons> recommendedWeapons_Accessor;
  std::unique_ptr<AvailableWeapons> availableWeapons_Accessor;
  boost::optional<DateTimeTypeValue> respondBy_Accessor;
  std::unique_ptr<Point2D_Type> proposedDMPI_Coordinates_Accessor;
  std::unique_ptr<PixelReferenceCoordinateType> referencePixelCoordinate_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_DMPI_DESIGNATIONREQUESTMDT_H
