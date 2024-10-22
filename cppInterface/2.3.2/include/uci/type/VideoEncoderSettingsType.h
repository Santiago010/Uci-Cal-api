/** @file VideoEncoderSettingsType.h
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

#ifndef UCI_TYPE_VIDEOENCODERSETTINGSTYPE_H
#define UCI_TYPE_VIDEOENCODERSETTINGSTYPE_H

#include "../base/Accessor.h"
#include "../base/BooleanAccessor.h"
#include "../base/UnsignedByteAccessor.h"
#include "../base/UnsignedIntAccessor.h"
#include "../base/UnsignedShortAccessor.h"
#include "../base/export.h"
#include "CropType.h"
#include "ForeignKeyType.h"
#include "FrequencyType.h"
#include "PercentType.h"
#include "UnsignedIntegerMinMaxType.h"
#include "VideoBlockSizeEnum.h"
#include "VideoChromaSubsampleEnum.h"
#include "VideoEncoderCompressionModeEnum.h"
#include "VisibleString32Type.h"

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
class VideoEncoderSettingsType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new VideoEncoderSettingsType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed VideoEncoderSettingsType.
    */
  static UCI_EXPORT VideoEncoderSettingsType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new VideoEncoderSettingsType initializing the data accessed by the new
    * VideoEncoderSettingsType using the data accessed by the specified VideoEncoderSettingsType (cloning).
    *
    * @param accessor The VideoEncoderSettingsType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created VideoEncoderSettingsType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed VideoEncoderSettingsType.
    */
  static UCI_EXPORT VideoEncoderSettingsType& create(const VideoEncoderSettingsType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified VideoEncoderSettingsType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The VideoEncoderSettingsType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(VideoEncoderSettingsType& accessor);

  /** Returns this accessor's type constant, i.e. videoEncoderSettingsType.
    *
    * @return This accessor's type constant, i.e. videoEncoderSettingsType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::videoEncoderSettingsType;
  }

  /** Returns the version that was initialized from the uci:version attribute of VideoEncoderSettingsType.
    *
    * @return The version that was initialized from the uci:version attribute of VideoEncoderSettingsType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const VideoEncoderSettingsType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by EncodingType.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by EncodingType.
    */
  virtual const uci::type::ForeignKeyType& getEncodingType() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by EncodingType.
    *
    * @return A reference to the accessor that provides access to the complex content identified by EncodingType.
    */
  virtual uci::type::ForeignKeyType& getEncodingType() = 0;

  /** Sets the complex content identified by EncodingType to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by EncodingType.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& setEncodingType(const uci::type::ForeignKeyType& value) = 0;

  /** Returns whether the Element identified by EncodingType exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by EncodingType is enabled or not.
    */
  virtual bool hasEncodingType() const = 0;

  /** Enables the Element identified by EncodingType.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by EncodingType.
    */
  virtual uci::type::ForeignKeyType& enableEncodingType(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by EncodingType.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& clearEncodingType() = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by Profile.
    *
    * @return A const reference to the accessor that provides access to the string identified by Profile.
    */
  virtual const uci::type::VisibleString32Type& getProfile() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by Profile.
    *
    * @return A reference to the accessor that provides access to the string identified by Profile.
    */
  virtual uci::type::VisibleString32Type& getProfile() = 0;

  /** Sets the string identified by Profile to the contents of the string accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by Profile.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& setProfile(const uci::type::VisibleString32Type& value) = 0;

  /** Sets the string identified by Profile to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& setProfile(const std::string& value) = 0;

  /** Sets the string identified by Profile to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& setProfile(const char* value) = 0;

  /** Returns whether the Element identified by Profile exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Profile is enabled or not.
    */
  virtual bool hasProfile() const = 0;

  /** Enables the Element identified by Profile.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the string identified by Profile.
    */
  virtual uci::type::VisibleString32Type& enableProfile(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Profile.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& clearProfile() = 0;

  /** Returns a const reference to the value of the enumeration identified by EncodingBlocks.
    *
    * @return A const reference to the value of the enumeration identified by EncodingBlocks.
    */
  virtual const uci::type::VideoBlockSizeEnum& getEncodingBlocks() const = 0;

  /** Returns a reference to the value of the enumeration identified by EncodingBlocks.
    *
    * @return A reference to the value of the enumeration identified by EncodingBlocks.
    */
  virtual uci::type::VideoBlockSizeEnum& getEncodingBlocks() = 0;

  /** Sets the value of the enumeration identified by EncodingBlocks.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& setEncodingBlocks(const uci::type::VideoBlockSizeEnum& value) = 0;

  /** Sets the value of the enumeration identified by EncodingBlocks.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& setEncodingBlocks(uci::type::VideoBlockSizeEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by EncodingBlocks exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by EncodingBlocks is enabled or not.
    */
  virtual bool hasEncodingBlocks() const = 0;

  /** Enables the Element identified by EncodingBlocks.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by EncodingBlocks.
    */
  virtual uci::type::VideoBlockSizeEnum& enableEncodingBlocks(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by EncodingBlocks.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& clearEncodingBlocks() = 0;

  /** Returns a const reference to the value of the enumeration identified by ChromaSubsample.
    *
    * @return A const reference to the value of the enumeration identified by ChromaSubsample.
    */
  virtual const uci::type::VideoChromaSubsampleEnum& getChromaSubsample() const = 0;

  /** Returns a reference to the value of the enumeration identified by ChromaSubsample.
    *
    * @return A reference to the value of the enumeration identified by ChromaSubsample.
    */
  virtual uci::type::VideoChromaSubsampleEnum& getChromaSubsample() = 0;

  /** Sets the value of the enumeration identified by ChromaSubsample.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& setChromaSubsample(const uci::type::VideoChromaSubsampleEnum& value) = 0;

  /** Sets the value of the enumeration identified by ChromaSubsample.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& setChromaSubsample(uci::type::VideoChromaSubsampleEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by ChromaSubsample exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ChromaSubsample is enabled or not.
    */
  virtual bool hasChromaSubsample() const = 0;

  /** Enables the Element identified by ChromaSubsample.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by ChromaSubsample.
    */
  virtual uci::type::VideoChromaSubsampleEnum& enableChromaSubsample(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ChromaSubsample.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& clearChromaSubsample() = 0;

  /** Returns the value of the SimplePrimitive data type identified by FrameRate.
    *
    * @return The value of the simple primitive data type identified by FrameRate.
    */
  virtual uci::type::FrequencyTypeValue getFrameRate() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by FrameRate.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& setFrameRate(uci::type::FrequencyTypeValue value) = 0;

  /** Returns whether the Element identified by FrameRate exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by FrameRate is enabled or not.
    */
  virtual bool hasFrameRate() const = 0;

  /** Clears (disabled) the Element identified by FrameRate.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& clearFrameRate() = 0;

  /** Returns the value of the SimplePrimitive data type identified by HDR.
    *
    * @return The value of the simple primitive data type identified by HDR.
    */
  virtual xs::Boolean getHDR() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by HDR.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& setHDR(xs::Boolean value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by BitRate.
    *
    * @return The value of the simple primitive data type identified by BitRate.
    */
  virtual xs::UnsignedInt getBitRate() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by BitRate.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& setBitRate(xs::UnsignedInt value) = 0;

  /** Returns whether the Element identified by BitRate exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by BitRate is enabled or not.
    */
  virtual bool hasBitRate() const = 0;

  /** Clears (disabled) the Element identified by BitRate.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& clearBitRate() = 0;

  /** Returns the value of the SimplePrimitive data type identified by EmbedKLV_Metadata.
    *
    * @return The value of the simple primitive data type identified by EmbedKLV_Metadata.
    */
  virtual xs::Boolean getEmbedKLV_Metadata() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by EmbedKLV_Metadata.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& setEmbedKLV_Metadata(xs::Boolean value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by EmbedPlatformMetadata.
    *
    * @return The value of the simple primitive data type identified by EmbedPlatformMetadata.
    */
  virtual xs::Boolean getEmbedPlatformMetadata() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by EmbedPlatformMetadata.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& setEmbedPlatformMetadata(xs::Boolean value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by SkipFrames.
    *
    * @return The value of the simple primitive data type identified by SkipFrames.
    */
  virtual xs::UnsignedByte getSkipFrames() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by SkipFrames.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& setSkipFrames(xs::UnsignedByte value) = 0;

  /** Returns whether the Element identified by SkipFrames exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by SkipFrames is enabled or not.
    */
  virtual bool hasSkipFrames() const = 0;

  /** Clears (disabled) the Element identified by SkipFrames.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& clearSkipFrames() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by QuantMinMax.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by QuantMinMax.
    */
  virtual const uci::type::UnsignedIntegerMinMaxType& getQuantMinMax() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by QuantMinMax.
    *
    * @return A reference to the accessor that provides access to the complex content identified by QuantMinMax.
    */
  virtual uci::type::UnsignedIntegerMinMaxType& getQuantMinMax() = 0;

  /** Sets the complex content identified by QuantMinMax to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by QuantMinMax.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& setQuantMinMax(const uci::type::UnsignedIntegerMinMaxType& value) = 0;

  /** Returns whether the Element identified by QuantMinMax exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by QuantMinMax is enabled or not.
    */
  virtual bool hasQuantMinMax() const = 0;

  /** Enables the Element identified by QuantMinMax.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by QuantMinMax.
    */
  virtual uci::type::UnsignedIntegerMinMaxType& enableQuantMinMax(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by QuantMinMax.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& clearQuantMinMax() = 0;

  /** Returns a const reference to the value of the enumeration identified by CompressionMode.
    *
    * @return A const reference to the value of the enumeration identified by CompressionMode.
    */
  virtual const uci::type::VideoEncoderCompressionModeEnum& getCompressionMode() const = 0;

  /** Returns a reference to the value of the enumeration identified by CompressionMode.
    *
    * @return A reference to the value of the enumeration identified by CompressionMode.
    */
  virtual uci::type::VideoEncoderCompressionModeEnum& getCompressionMode() = 0;

  /** Sets the value of the enumeration identified by CompressionMode.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& setCompressionMode(const uci::type::VideoEncoderCompressionModeEnum& value) = 0;

  /** Sets the value of the enumeration identified by CompressionMode.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& setCompressionMode(uci::type::VideoEncoderCompressionModeEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by CompressionMode exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by CompressionMode is enabled or not.
    */
  virtual bool hasCompressionMode() const = 0;

  /** Enables the Element identified by CompressionMode.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by CompressionMode.
    */
  virtual uci::type::VideoEncoderCompressionModeEnum& enableCompressionMode(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by CompressionMode.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& clearCompressionMode() = 0;

  /** Returns the value of the SimplePrimitive data type identified by B_Frames.
    *
    * @return The value of the simple primitive data type identified by B_Frames.
    */
  virtual xs::UnsignedByte getB_Frames() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by B_Frames.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& setB_Frames(xs::UnsignedByte value) = 0;

  /** Returns whether the Element identified by B_Frames exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by B_Frames is enabled or not.
    */
  virtual bool hasB_Frames() const = 0;

  /** Clears (disabled) the Element identified by B_Frames.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& clearB_Frames() = 0;

  /** Returns the value of the SimplePrimitive data type identified by GOP_Size.
    *
    * @return The value of the simple primitive data type identified by GOP_Size.
    */
  virtual xs::UnsignedShort getGOP_Size() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by GOP_Size.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& setGOP_Size(xs::UnsignedShort value) = 0;

  /** Returns whether the Element identified by GOP_Size exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by GOP_Size is enabled or not.
    */
  virtual bool hasGOP_Size() const = 0;

  /** Clears (disabled) the Element identified by GOP_Size.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& clearGOP_Size() = 0;

  /** Returns the value of the SimplePrimitive data type identified by IntraRefreshMode.
    *
    * @return The value of the simple primitive data type identified by IntraRefreshMode.
    */
  virtual xs::Boolean getIntraRefreshMode() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by IntraRefreshMode.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& setIntraRefreshMode(xs::Boolean value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by IntraRefreshPercentage.
    *
    * @return The value of the simple primitive data type identified by IntraRefreshPercentage.
    */
  virtual uci::type::PercentTypeValue getIntraRefreshPercentage() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by IntraRefreshPercentage.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& setIntraRefreshPercentage(uci::type::PercentTypeValue value) = 0;

  /** Returns whether the Element identified by IntraRefreshPercentage exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by IntraRefreshPercentage is enabled or not.
    */
  virtual bool hasIntraRefreshPercentage() const = 0;

  /** Clears (disabled) the Element identified by IntraRefreshPercentage.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& clearIntraRefreshPercentage() = 0;

  /** Returns the value of the SimplePrimitive data type identified by ColorBitDepth.
    *
    * @return The value of the simple primitive data type identified by ColorBitDepth.
    */
  virtual xs::UnsignedByte getColorBitDepth() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by ColorBitDepth.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& setColorBitDepth(xs::UnsignedByte value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Crop.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Crop.
    */
  virtual const uci::type::CropType& getCrop() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Crop.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Crop.
    */
  virtual uci::type::CropType& getCrop() = 0;

  /** Sets the complex content identified by Crop to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Crop.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& setCrop(const uci::type::CropType& value) = 0;

  /** Returns whether the Element identified by Crop exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Crop is enabled or not.
    */
  virtual bool hasCrop() const = 0;

  /** Enables the Element identified by Crop.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Crop.
    */
  virtual uci::type::CropType& enableCrop(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Crop.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& clearCrop() = 0;

  /** Returns the value of the SimplePrimitive data type identified by Scaling.
    *
    * @return The value of the simple primitive data type identified by Scaling.
    */
  virtual uci::type::PercentTypeValue getScaling() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Scaling.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& setScaling(uci::type::PercentTypeValue value) = 0;

  /** Returns whether the Element identified by Scaling exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Scaling is enabled or not.
    */
  virtual bool hasScaling() const = 0;

  /** Clears (disabled) the Element identified by Scaling.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::VideoEncoderSettingsType& clearScaling() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  VideoEncoderSettingsType() {
  }

  /** The destructor [only available to derived classes]. */
  ~VideoEncoderSettingsType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The VideoEncoderSettingsType to copy from.
    */
  VideoEncoderSettingsType(const VideoEncoderSettingsType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this VideoEncoderSettingsType to the contents of the
    * VideoEncoderSettingsType on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The VideoEncoderSettingsType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this VideoEncoderSettingsType.
    * @return A reference to this VideoEncoderSettingsType.
    */
  VideoEncoderSettingsType& operator=(const VideoEncoderSettingsType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_VIDEOENCODERSETTINGSTYPE_H

