// OoT3D decomp @ 003495e0  name=FUN_003495e0  size=3604

undefined4 FUN_003495e0(int param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined4 uVar2;

  switch(param_2) {
  case 0:
    if ((*(ushort *)(DAT_00349b84 + DAT_00349b80) & 0x200) != 0) {
      uVar2 = DAT_00349b88;
      if ((*(ushort *)(DAT_00349b80 + 0xf10) & 0x20) != 0) {
        uVar2 = DAT_00349b8c;
      }
      return uVar2;
    }
    uVar1 = *(ushort *)(DAT_00349b80 + 0xf10);
    if ((*(ushort *)(DAT_00349b84 + DAT_00349b80) & 4) == 0) {
      if ((uVar1 & 1) == 0) {
        return DAT_00349ba0;
      }
      uVar2 = DAT_00349b98;
      if ((uVar1 & 2) != 0) {
        uVar2 = DAT_00349b9c;
      }
      return uVar2;
    }
    uVar2 = DAT_00349b90;
    if ((uVar1 & 8) != 0) {
      uVar2 = DAT_00349b94;
    }
    return uVar2;
  case 1:
    if (*(int *)(DAT_00349b80 + 4) == 0) {
      if ((*(ushort *)(DAT_00349bc0 + 0xec) & 0x1000) != 0) {
        uVar2 = DAT_00349bc4;
        if ((*(ushort *)(DAT_00349ba4 + 0x10) & 0x200) != 0) {
          uVar2 = DAT_00349bc8;
        }
        return uVar2;
      }
      if ((*(ushort *)(DAT_00349b84 + DAT_00349b80) & 0x800) == 0) {
        uVar2 = DAT_00349bd4;
        if ((*(ushort *)(DAT_00349ba4 + 0x10) & 0x20) != 0) {
          uVar2 = DAT_00349bd8;
        }
        return uVar2;
      }
      uVar2 = DAT_00349bcc;
      if ((*(ushort *)(DAT_00349ba4 + 0x10) & 0x80) != 0) {
        uVar2 = DAT_00349bd0;
      }
      return uVar2;
    }
    if ((*(ushort *)(DAT_00349b84 + DAT_00349b80) & 0x200) != 0) {
      uVar2 = DAT_00349ba8;
      if ((*(ushort *)(DAT_00349ba4 + 0x10) & 1) != 0) {
        uVar2 = DAT_00349bac;
      }
      return uVar2;
    }
    if ((*(ushort *)(DAT_00349b84 + DAT_00349b80) & 8) == 0) {
      uVar2 = DAT_00349bb8;
      if ((*(ushort *)(DAT_00349b80 + 0xf10) & 0x1000) != 0) {
        uVar2 = DAT_00349bbc;
      }
      return uVar2;
    }
    uVar2 = DAT_00349bb0;
    if ((*(ushort *)(DAT_00349b80 + 0xf10) & 0x4000) != 0) {
      uVar2 = DAT_00349bb4;
    }
    return uVar2;
  case 2:
    if (*(int *)(DAT_00349b80 + 4) != 0) {
      if ((*(ushort *)(DAT_00349b80 + 0xeec) & 0x200) != 0) {
        return DAT_00349c20;
      }
      return DAT_00349bdc;
    }
    if ((*(ushort *)(DAT_00349bc0 + 0xec) & 0x1000) != 0) {
      return DAT_00349bfc;
    }
    if ((*(ushort *)(DAT_00349be0 + 0x10) & 2) == 0) {
      return DAT_00349c2c;
    }
    return DAT_00349be4;
  case 3:
    if (*(int *)(DAT_00349b80 + 4) == 0) {
      uVar2 = DAT_00349bf0;
      if ((*(ushort *)(DAT_00349bc0 + 0xec) & 0x1000) != 0) {
        uVar2 = DAT_00349bf4;
      }
      return uVar2;
    }
    if ((*(ushort *)(DAT_00349b80 + 0xeec) & 0x200) != 0) {
      return DAT_00349c40;
    }
    uVar2 = DAT_00349be8;
    if ((*(ushort *)(DAT_00349ba4 + 0x10) & 0x4000) != 0) {
      uVar2 = DAT_00349bec;
    }
    return uVar2;
  case 4:
    if (*(int *)(DAT_00349b80 + 4) == 0) {
      if ((*(ushort *)(DAT_00349bc0 + 0xec) & 0x1000) != 0) {
        return DAT_00349bfc;
      }
      uVar2 = DAT_00349c00;
      if ((*(ushort *)(DAT_00349be0 + 0x10) & 0x80) != 0) {
        uVar2 = DAT_00349c04;
      }
      return uVar2;
    }
    if ((*(ushort *)(DAT_00349b80 + 0xeec) & 0x200) != 0) {
      return DAT_00349c20;
    }
    return DAT_00349bf8;
  case 5:
    if (*(int *)(DAT_00349b80 + 4) == 0) {
      uVar2 = DAT_00349c18;
      if ((*(ushort *)(DAT_00349bc0 + 0xec) & 0x1000) != 0) {
        uVar2 = DAT_00349c1c;
      }
      return uVar2;
    }
    if ((*(ushort *)(DAT_00349b80 + 0xeec) & 0x200) == 0) {
      uVar2 = DAT_00349c10;
      if ((*(ushort *)(DAT_00349c0c + 0x10) & 4) != 0) {
        uVar2 = DAT_00349c14;
      }
      return uVar2;
    }
    return DAT_00349c08;
  case 6:
    if (*(int *)(DAT_00349b80 + 4) == 0) {
      if ((*(ushort *)(DAT_00349bc0 + 0xec) & 0x1000) != 0) {
        return DAT_00349c2c;
      }
      return DAT_00349c30;
    }
    if ((*(ushort *)(DAT_00349b80 + 0xeec) & 0x200) != 0) {
      return DAT_00349c20;
    }
    uVar2 = DAT_00349c24;
    if ((*(ushort *)(DAT_00349c0c + 0x10) & 0x10) != 0) {
      uVar2 = DAT_00349c28;
    }
    return uVar2;
  case 7:
    if (*(int *)(DAT_00349b80 + 4) == 0) {
      return DAT_00349c3c;
    }
    if ((*(ushort *)(DAT_00349b80 + 0xeec) & 0x200) != 0) {
      return DAT_00349c40;
    }
    uVar2 = DAT_00349c34;
    if ((*(ushort *)(DAT_00349c0c + 0x10) & 0x40) != 0) {
      uVar2 = DAT_00349c38;
    }
    return uVar2;
  case 8:
    if (*(int *)(DAT_00349b80 + 4) == 0) {
      if ((*(ushort *)(DAT_00349b84 + DAT_00349c4c) & 0x1000) == 0) {
        uVar2 = DAT_00349c54;
        if ((*(ushort *)(DAT_00349c4c + 0xf10) & 2) != 0) {
          uVar2 = DAT_00349c58;
        }
        return uVar2;
      }
      return DAT_00349c50;
    }
    if ((*(ushort *)(DAT_00349b80 + 0xeec) & 0x200) != 0) {
      return DAT_00349c40;
    }
    uVar2 = DAT_00349c44;
    if ((*(ushort *)(DAT_00349c0c + 0x10) & 0x100) != 0) {
      uVar2 = DAT_00349c48;
    }
    return uVar2;
  case 9:
    if (*(int *)(DAT_00349b80 + 4) != 0) {
      uVar2 = DAT_00349c5c;
      if ((*(ushort *)(DAT_00349b80 + 0xeec) & 0x200) != 0) {
        uVar2 = DAT_00349c60;
      }
      return uVar2;
    }
    if ((*(ushort *)(DAT_00349bc0 + 0xec) & 0x1000) != 0) {
      return DAT_00349c70;
    }
    return DAT_00349c64;
  case 10:
    if (*(int *)(DAT_00349b80 + 4) != 0) {
      uVar2 = DAT_00349c68;
      if ((*(ushort *)(DAT_00349b80 + 0xeec) & 0x200) != 0) {
        uVar2 = DAT_00349c6c;
      }
      return uVar2;
    }
    if ((*(ushort *)(DAT_00349b84 + DAT_00349c4c) & 0x1000) != 0) {
      return DAT_00349c70;
    }
    uVar2 = DAT_00349c74;
    if ((*(ushort *)(DAT_00349c4c + 0xf10) & 0x200) != 0) {
      uVar2 = DAT_00349c78;
    }
    return uVar2;
  case 0xb:
    if (*(int *)(DAT_00349b80 + 4) == 0) {
      uVar2 = DAT_0034a184;
      if ((*(ushort *)(DAT_00349bc0 + 0xec) & 0x1000) != 0) {
        uVar2 = DAT_0034a188;
      }
      return uVar2;
    }
    uVar2 = DAT_00349c7c;
    if ((*(ushort *)(DAT_00349b80 + 0xeec) & 0x200) != 0) {
      uVar2 = DAT_00349c80;
    }
    return uVar2;
  case 0xc:
    if (*(int *)(DAT_00349b80 + 4) == 0) {
      uVar2 = DAT_0034a194;
      if ((*(ushort *)(DAT_00349bc0 + 0xec) & 0x1000) != 0) {
        uVar2 = DAT_0034a198;
      }
      return uVar2;
    }
    uVar2 = DAT_0034a18c;
    if ((*(ushort *)(DAT_00349b80 + 0xeec) & 0x200) != 0) {
      uVar2 = DAT_0034a190;
    }
    return uVar2;
  case 0xd:
    if (*(int *)(DAT_00349b80 + 4) != 0) {
      uVar2 = DAT_0034a19c;
      if ((*(ushort *)(DAT_00349b80 + 0xeec) & 0x200) != 0) {
        uVar2 = DAT_0034a1a0;
      }
      return uVar2;
    }
    if ((*(ushort *)(DAT_00349bc0 + 0xec) & 0x1000) == 0) {
      uVar2 = DAT_0034a1ac;
      if ((*(ushort *)(DAT_0034a1a8 + 0x10) & 2) != 0) {
        uVar2 = DAT_0034a1b0;
      }
      return uVar2;
    }
    return DAT_0034a1a4;
  default:
    return 1;
  case 0xf:
    if ((*(ushort *)(DAT_00349bc0 + 0xec) & 0x1000) == 0) {
      uVar2 = DAT_0034a1b8;
      if ((*(ushort *)(DAT_0034a1a8 + 0x10) & 0x40) != 0) {
        uVar2 = DAT_0034a1bc;
      }
      return uVar2;
    }
    return DAT_0034a1b4;
  case 0x10:
    if (*(short *)(param_1 + 0x104) != 0x5f) {
      if ((*(ushort *)(DAT_0034a1a8 + 0x10) & 0x400) != 0) {
        return DAT_0034a1c0;
      }
      if (DAT_0034a1c4 <= *(ushort *)(DAT_00349b80 + 0xc) - 0x4000) {
        return DAT_0034a1cc;
      }
    }
    return DAT_0034a1c8;
  case 0x11:
    if ((*(ushort *)(DAT_0034a1d0 + 0xec) & 0x200) == 0) {
      return 1;
    }
    if ((*(ushort *)(DAT_0034a1d4 + 0xec) & 0x20) == 0) {
      return 1;
    }
    if ((*(ushort *)(DAT_0034a1d8 + 0xec) & 0x80) == 0) {
      return 1;
    }
    uVar2 = DAT_0034a1dc;
    if ((*(ushort *)(DAT_0034a1a8 + 0x10) & 0x1000) != 0) {
      uVar2 = DAT_0034a1e0;
    }
    return uVar2;
  case 0x12:
    if ((((*(ushort *)(DAT_0034a1d0 + 0xec) & 0x200) != 0) &&
        ((*(ushort *)(DAT_0034a1d4 + 0xec) & 0x20) != 0)) &&
       ((*(ushort *)(DAT_0034a1d8 + 0xec) & 0x80) != 0)) {
      return DAT_0034a1e8;
    }
    if ((*(ushort *)(DAT_0034a1ec + 0xec) & 4) == 0) {
      return DAT_0034a1fc;
    }
    uVar2 = DAT_0034a1f4;
    if ((*(ushort *)(DAT_0034a1f0 + 0x10) & 2) != 0) {
      uVar2 = DAT_0034a1f8;
    }
    return uVar2;
  case 0x13:
    return DAT_0034a1e4;
  case 0x14:
  case 0x15:
    uVar1 = *(ushort *)(DAT_0034a200 + 0xec);
    if ((uVar1 & 4) != 0) {
      return DAT_0034a204;
    }
    if ((uVar1 & 2) == 0) {
      uVar2 = DAT_0034a210;
      if ((uVar1 & 1) != 0) {
        uVar2 = DAT_0034a214;
      }
      return uVar2;
    }
    uVar2 = DAT_0034a208;
    if ((*(ushort *)(DAT_0034a1f0 + 0x10) & 0x40) != 0) {
      uVar2 = DAT_0034a20c;
    }
    return uVar2;
  case 0x18:
    if ((((*(ushort *)(DAT_0034a1d0 + 0xec) & 0x200) != 0) &&
        ((*(ushort *)(DAT_0034a1d4 + 0xec) & 0x20) != 0)) &&
       ((*(ushort *)(DAT_0034a1d8 + 0xec) & 0x80) != 0)) {
      return DAT_0034a218;
    }
    return DAT_0034a21c;
  case 0x19:
    if ((((*(ushort *)(DAT_0034a1d0 + 0xec) & 0x200) != 0) &&
        ((*(ushort *)(DAT_0034a1d4 + 0xec) & 0x20) != 0)) &&
       ((*(ushort *)(DAT_0034a1d8 + 0xec) & 0x80) != 0)) {
      return DAT_0034a220;
    }
    return DAT_0034a224;
  case 0x1a:
    if ((((*(ushort *)(DAT_0034a1d0 + 0xec) & 0x200) != 0) &&
        ((*(ushort *)(DAT_0034a1d4 + 0xec) & 0x20) != 0)) &&
       ((*(ushort *)(DAT_0034a1d8 + 0xec) & 0x80) != 0)) {
      return DAT_0034a228;
    }
    return DAT_0034a22c;
  case 0x1b:
    if ((((*(ushort *)(DAT_0034a1d0 + 0xec) & 0x200) != 0) &&
        ((*(ushort *)(DAT_0034a1d4 + 0xec) & 0x20) != 0)) &&
       ((*(ushort *)(DAT_0034a1d8 + 0xec) & 0x80) != 0)) {
      return DAT_0034a230;
    }
    if (((*(ushort *)(DAT_0034a1ec + 0xec) & 0x10) == 0) &&
       ((*(ushort *)(DAT_0034a1ec + 0xec) & 2) != 0)) {
      uVar2 = DAT_0034a238;
      if ((*(ushort *)(DAT_0034a234 + 0x10) & 0x40) != 0) {
        uVar2 = DAT_0034a23c;
      }
      return uVar2;
    }
    return DAT_0034a240;
  case 0x1c:
    if ((((*(ushort *)(DAT_0034a1d0 + 0xec) & 0x200) != 0) &&
        ((*(ushort *)(DAT_0034a1d4 + 0xec) & 0x20) != 0)) &&
       ((*(ushort *)(DAT_0034a1d8 + 0xec) & 0x80) != 0)) {
      return DAT_0034a244;
    }
    return DAT_0034a248;
  case 0x1d:
    if ((((*(ushort *)(DAT_0034a1d0 + 0xec) & 0x200) != 0) &&
        ((*(ushort *)(DAT_0034a1d4 + 0xec) & 0x20) != 0)) &&
       ((*(ushort *)(DAT_0034a1d8 + 0xec) & 0x80) != 0)) {
      return DAT_0034a24c;
    }
    return DAT_0034a250;
  case 0x1e:
    if ((((*(ushort *)(DAT_0034a1d0 + 0xec) & 0x200) != 0) &&
        ((*(ushort *)(DAT_0034a1d4 + 0xec) & 0x20) != 0)) &&
       ((*(ushort *)(DAT_0034a1d8 + 0xec) & 0x80) != 0)) {
      return DAT_0034a254;
    }
    return DAT_0034a258;
  case 0x1f:
    if ((((*(ushort *)(DAT_0034a1d0 + 0xec) & 0x200) != 0) &&
        ((*(ushort *)(DAT_0034a1d4 + 0xec) & 0x20) != 0)) &&
       ((*(ushort *)(DAT_0034a1d8 + 0xec) & 0x80) != 0)) {
      return DAT_0034a25c;
    }
    return DAT_0034a260;
  case 0x20:
    if ((((*(ushort *)(DAT_0034a1d0 + 0xec) & 0x200) != 0) &&
        ((*(ushort *)(DAT_0034a1d4 + 0xec) & 0x20) != 0)) &&
       ((*(ushort *)(DAT_0034a1d8 + 0xec) & 0x80) != 0)) {
      return DAT_0034a264;
    }
    return DAT_0034a268;
  case 0x21:
    if ((((*(ushort *)(DAT_0034a1d0 + 0xec) & 0x200) != 0) &&
        ((*(ushort *)(DAT_0034a1d4 + 0xec) & 0x20) != 0)) &&
       ((*(ushort *)(DAT_0034a1d8 + 0xec) & 0x80) != 0)) {
      return DAT_0034a26c;
    }
    return DAT_0034a270;
  case 0x22:
    return DAT_0034a274;
  case 0x23:
    uVar2 = DAT_0034a27c;
    if ((*(ushort *)(DAT_0034a278 + 0x10) & 0x100) != 0) {
      uVar2 = DAT_0034a280;
    }
    return uVar2;
  case 0x25:
    return DAT_0034a71c;
  case 0x26:
    uVar1 = *(ushort *)(DAT_0034a1d4 + 0xec);
    if (*(int *)(DAT_00349b80 + 4) != 0) {
      if ((uVar1 & 0x20) != 0) {
        return DAT_0034a750;
      }
      if ((uVar1 & 8) == 0) {
        if ((*(ushort *)(DAT_0034a724 + 0x10) & 1) != 0) {
          return DAT_0034a760;
        }
        return DAT_0034a728;
      }
      return DAT_0034a720;
    }
    uVar1 = uVar1 & 1;
    break;
  case 0x27:
    uVar1 = *(ushort *)(DAT_0034a1d4 + 0xec);
    if (*(int *)(DAT_00349b80 + 4) != 0) {
      if ((uVar1 & 0x20) != 0) {
        return DAT_0034a750;
      }
      if ((uVar1 & 8) != 0) {
        return DAT_0034a730;
      }
      return DAT_0034a72c;
    }
    uVar1 = uVar1 & 0x400;
    break;
  case 0x28:
    uVar1 = *(ushort *)(DAT_0034a1d4 + 0xec);
    if (*(int *)(DAT_00349b80 + 4) != 0) {
      if ((uVar1 & 0x20) != 0) {
        return DAT_0034a750;
      }
      if ((uVar1 & 8) != 0) {
        return DAT_0034a730;
      }
      uVar2 = DAT_0034a734;
      if ((*(ushort *)(DAT_0034a724 + 0x10) & 0x800) != 0) {
        uVar2 = DAT_0034a738;
      }
      return uVar2;
    }
    uVar1 = uVar1 & 0x800;
    break;
  case 0x29:
    if (*(int *)(DAT_00349b80 + 4) != 0) {
      if ((*(ushort *)(DAT_0034a1d4 + 0xec) & 0x20) != 0) {
        return DAT_0034a750;
      }
      uVar2 = DAT_0034a740;
      if ((*(ushort *)(DAT_0034a73c + 0x10) & 1) != 0) {
        uVar2 = DAT_0034a744;
      }
      return uVar2;
    }
    uVar1 = *(ushort *)(DAT_0034a1d4 + 0xec) & 0x1000;
    break;
  case 0x2a:
    if (*(int *)(DAT_00349b80 + 4) != 0) {
      if ((*(ushort *)(DAT_0034a1d4 + 0xec) & 0x20) != 0) {
        return DAT_0034a750;
      }
      uVar2 = DAT_0034a748;
      if ((*(ushort *)(DAT_0034a73c + 0x10) & 0x10) != 0) {
        uVar2 = DAT_0034a74c;
      }
      return uVar2;
    }
    uVar1 = *(ushort *)(DAT_0034a1d4 + 0xec) & 0x1000;
    break;
  case 0x2b:
    if (*(int *)(DAT_00349b80 + 4) != 0) {
      if ((*(ushort *)(DAT_0034a1d4 + 0xec) & 0x20) != 0) {
        return DAT_0034a750;
      }
      uVar2 = DAT_0034a754;
      if ((*(ushort *)(DAT_0034a73c + 0x10) & 0x100) != 0) {
        uVar2 = DAT_0034a758;
      }
      return uVar2;
    }
    uVar1 = *(ushort *)(DAT_0034a1d4 + 0xec) & 0x2000;
    break;
  case 0x30:
    uVar1 = *(ushort *)(DAT_0034a1d4 + 0xec);
    if ((uVar1 & 0x20) == 0) {
      uVar2 = DAT_0034a768;
      if ((uVar1 & 1) != 0 && (uVar1 & 2) != 0) {
        uVar2 = DAT_0034a76c;
      }
      return uVar2;
    }
    return DAT_0034a764;
  case 0x31:
    if ((*(ushort *)(DAT_0034a1d8 + 0xec) & 0x80) != 0) {
      return DAT_0034a790;
    }
    if ((*(ushort *)(DAT_0034a1d8 + 0xec) & 1) == 0) {
      return DAT_0034a7a4;
    }
    return DAT_0034a770;
  case 0x32:
    if ((*(ushort *)(DAT_0034a1d8 + 0xec) & 0x80) != 0) {
      return DAT_0034a79c;
    }
    if ((*(ushort *)(DAT_0034a1d8 + 0xec) & 1) == 0) {
      return DAT_0034a7a4;
    }
    uVar2 = DAT_0034a778;
    if ((*(ushort *)(DAT_0034a774 + 0x10) & 0x10) != 0) {
      uVar2 = DAT_0034a77c;
    }
    return uVar2;
  case 0x33:
    uVar1 = *(ushort *)(DAT_0034a1d8 + 0xec);
    if ((uVar1 & 0x80) != 0) {
      return DAT_0034a790;
    }
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 1) == 0) {
        return DAT_0034a7a4;
      }
      return DAT_0034a788;
    }
    uVar2 = DAT_0034a780;
    if ((*(ushort *)(DAT_0034a774 + 0x10) & 0x400) != 0) {
      uVar2 = DAT_0034a784;
    }
    return uVar2;
  case 0x34:
    if ((*(ushort *)(DAT_0034a1d8 + 0xec) & 0x80) != 0) {
      return DAT_0034a79c;
    }
    if ((*(ushort *)(DAT_0034a1d8 + 0xec) & 1) == 0) {
      return DAT_0034a7a4;
    }
    return DAT_0034a78c;
  case 0x35:
    uVar1 = *(ushort *)(DAT_0034a1d8 + 0xec);
    if ((uVar1 & 0x80) != 0) {
      return DAT_0034a790;
    }
    if ((uVar1 & 8) == 0) {
      if ((uVar1 & 1) == 0) {
        return DAT_0034a7a4;
      }
      return DAT_0034a798;
    }
    return DAT_0034a794;
  case 0x36:
    if ((*(ushort *)(DAT_0034a1d8 + 0xec) & 0x80) != 0) {
      return DAT_0034a79c;
    }
    if ((*(ushort *)(DAT_0034a1d8 + 0xec) & 1) == 0) {
      return DAT_0034a7a4;
    }
    return DAT_0034a7a0;
  case 0x37:
    if (*(int *)(DAT_00349b80 + 4) == 0) {
      return 1;
    }
    if ((*(ushort *)(DAT_0034a1d8 + 0xec) & 0x80) == 0) {
      if ((*(ushort *)(DAT_0034a1d8 + 0xec) & 2) == 0) {
        return DAT_0034a7b8;
      }
      uVar2 = DAT_0034a7b0;
      if ((*(ushort *)(DAT_0034a7ac + 0x10) & 0x100) != 0) {
        uVar2 = DAT_0034a7b4;
      }
      return uVar2;
    }
    return DAT_0034a7a8;
  case 0x3a:
    return DAT_0034a7bc;
  case 0x3b:
    return DAT_0034a7c0;
  case 0x3c:
  case 0x3e:
    return DAT_0034a7c8;
  case 0x3d:
    uVar1 = *(ushort *)(DAT_0034a7c4 + 0x10) & 0x40;
    goto joined_r0x0034a61c;
  case 0x3f:
    uVar1 = *(ushort *)(DAT_0034a7c4 + 0x10) & 0x400;
joined_r0x0034a61c:
    if (uVar1 != 0) {
      return DAT_0034a7cc;
    }
    return 0x5000;
  case 0x47:
    uVar1 = *(ushort *)(DAT_0034a1ec + 0xec);
    if ((uVar1 & 0x40) != 0) {
      return DAT_0034a7d0;
    }
    if ((uVar1 & 0x20) != 0) {
      return DAT_0034a7d4;
    }
    if ((uVar1 & 0x10) != 0) {
      return DAT_0034a7d8;
    }
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 1) == 0) {
        return DAT_0034a7e8;
      }
      uVar2 = DAT_0034a7e0;
      if ((uVar1 & 2) != 0) {
        uVar2 = DAT_0034a7e4;
      }
      return uVar2;
    }
    return DAT_0034a7dc;
  case 0x48:
    if (*(int *)(DAT_00349b80 + 4) != 0) {
      if (((*(ushort *)(DAT_0034a1ec + 0xec) & 0x10) == 0) &&
         ((*(ushort *)(DAT_0034a7ec + 0x10) & 0x10) == 0)) {
        return DAT_0034a7f0;
      }
      return 0x2040;
    }
    if ((*(ushort *)(DAT_0034a1ec + 0xec) & 0x100) != 0) {
      return 1;
    }
    if (*(int *)(DAT_00349b80 + 0x10) == 0) {
      uVar2 = DAT_0034a7f8;
      if ((*(ushort *)(DAT_0034a7ec + 0x10) & 0x400) != 0) {
        uVar2 = DAT_0034a7fc;
      }
      return uVar2;
    }
    return DAT_0034a7f4;
  }
  if (uVar1 == 0) {
    return DAT_0034a760;
  }
  return DAT_0034a75c;
}
