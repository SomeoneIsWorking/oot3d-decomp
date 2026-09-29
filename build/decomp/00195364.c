// OoT3D decomp @ 00195364  name=FUN_00195364  size=1100

uint FUN_00195364(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;

  uVar2 = FUN_0036bba8(param_1,0x20);
  iVar3 = DAT_001957f0;
  if (uVar2 == 0) {
    uVar2 = *(ushort *)(param_2 + 0x1c) & 0x1f;
    switch(uVar2) {
    case 0:
      if ((*(ushort *)(DAT_001957e8 + 0x32) & 0x4000) != 0) {
        return DAT_001957ec;
      }
      if ((0x13 < *(ushort *)
                   (DAT_001957fc +
                    ((int)(*(uint *)(DAT_001957f0 + 0xb8) & *(uint *)(DAT_001957f4 + 4)) >>
                    *(sbyte *)(DAT_001957f8 + 1)) * 2 + 8)) &&
         ((int)*(char *)(DAT_00195800 + param_2) - 8U < 4)) {
        return DAT_00195804;
      }
      return DAT_00195808;
    case 1:
      if ((*(uint *)(DAT_001957f0 + 0xbc) & *(uint *)(DAT_0019580c + 4)) != 0) {
        uVar2 = DAT_00195810;
        if ((*(ushort *)(DAT_001957f0 + 0xf30) & 0x8000) != 0) {
          uVar2 = DAT_00195814;
        }
        return uVar2;
      }
      if (((uint)*(ushort *)(DAT_001957f0 + 0xb6) &
          *(uint *)(DAT_0019580c + 4) << *(sbyte *)(DAT_00195818 + 2)) != 0) {
        uVar2 = DAT_0019581c;
        if ((*(ushort *)(DAT_001957f0 + 0xf30) & 0x4000) != 0) {
          uVar2 = DAT_00195820;
        }
        return uVar2;
      }
      if ((*(ushort *)(DAT_001957f0 + 0xf30) & 0x800) != 0) {
        return DAT_00195824;
      }
      if ((*(ushort *)(DAT_001957f0 + 0xf30) & 0x1000) == 0) {
        return DAT_00195830;
      }
      *(undefined1 *)(param_2 + 0xc44) = 0;
      *(undefined1 *)(param_2 + 0xc45) = 0;
      uVar2 = DAT_00195828;
      if ((*(ushort *)(iVar3 + 0xf30) & 0x400) != 0) {
        uVar2 = DAT_0019582c;
      }
      return uVar2;
    case 2:
      iVar3 = *(int *)(DAT_00195834 + param_1);
      if ((*(char *)(DAT_001957f0 + 0x52) == '\0') &&
         (bVar1 = *(byte *)((uint)*(byte *)(DAT_00195838 + 0x2d) + DAT_0019583c), bVar1 < 0x37)) {
        if (bVar1 < 0x34) {
          *(undefined1 *)(iVar3 + 0x172b) = 0xb;
          return DAT_00195848;
        }
        *(undefined1 *)(iVar3 + 0x172b) = 0xe;
        return DAT_00195844;
      }
      *(undefined1 *)(iVar3 + 0x172b) = 0xf;
      return DAT_00195840;
    case 3:
      iVar3 = FUN_0036e864(param_1,*(ushort *)(param_2 + 0x1c) >> 10);
      uVar2 = DAT_0019584c;
      if (iVar3 != 0) {
        uVar2 = DAT_00195850;
      }
      return uVar2;
    case 4:
      if ((*(uint *)(DAT_001957f0 + 0xbc) & *(uint *)(DAT_0019580c + 0x4c)) == 0) {
        return DAT_00195854;
      }
      break;
    case 5:
      if ((*(uint *)(DAT_001957f0 + 0xbc) & *(uint *)(DAT_0019580c + 0x4c)) == 0) {
        uVar2 = DAT_0019585c;
        if ((*(ushort *)(DAT_00195858 + 0xf0) & 8) != 0) {
          uVar2 = DAT_00195860;
        }
        return uVar2;
      }
      break;
    case 6:
      if (((*(uint *)(DAT_0019580c + 4) & *(uint *)(DAT_001957f0 + 0xbc)) != 0) &&
         (*(int *)(DAT_001957f0 + 4) == 0)) {
        return DAT_001958b0;
      }
      if ((*(uint *)(DAT_001957f0 + 0xbc) & *(uint *)(DAT_0019580c + 0x4c)) == 0) {
        if ((*(ushort *)(DAT_00195858 + 0xf0) & 8) == 0) {
          uVar2 = DAT_00195868;
          if ((*(ushort *)(DAT_001957e8 + 0x2c) & 1) != 0) {
            uVar2 = DAT_0019586c;
          }
          return uVar2;
        }
        return DAT_00195864;
      }
      break;
    case 7:
      if (((*(uint *)(DAT_0019580c + 4) & *(uint *)(DAT_001957f0 + 0xbc)) != 0) &&
         (*(int *)(DAT_001957f0 + 4) == 0)) {
        return DAT_001958b0;
      }
      if ((*(uint *)(DAT_001957f0 + 0xbc) & *(uint *)(DAT_0019580c + 0x4c)) == 0) {
        uVar2 = DAT_00195870;
        if ((*(ushort *)(DAT_001957e8 + 0x2e) & 1) != 0) {
          uVar2 = DAT_00195874;
        }
        return uVar2;
      }
      break;
    case 8:
      if (((*(uint *)(DAT_0019580c + 4) & *(uint *)(DAT_001957f0 + 0xbc)) != 0) &&
         (*(int *)(DAT_001957f0 + 4) == 0)) {
        return DAT_001958b0;
      }
      if ((*(uint *)(DAT_001957f0 + 0xbc) & *(uint *)(DAT_0019580c + 0x4c)) == 0) {
        uVar2 = DAT_0019587c;
        if ((*(ushort *)(DAT_001957e8 + 0x2e) & 0x10) != 0) {
          uVar2 = DAT_00195880;
        }
        return uVar2;
      }
      return DAT_00195878;
    case 9:
      if (((*(uint *)(DAT_0019580c + 4) & *(uint *)(DAT_001957f0 + 0xbc)) != 0) &&
         (*(int *)(DAT_001957f0 + 4) == 0)) {
        return DAT_001958b0;
      }
      if ((*(uint *)(DAT_001957f0 + 0xbc) & *(uint *)(DAT_0019580c + 0x4c)) == 0) {
        if ((int)(*(uint *)(DAT_001957f0 + 0xb8) & *(uint *)(DAT_001957f4 + 8)) >>
            *(sbyte *)(DAT_001957f8 + 2) == 0) {
          uVar2 = DAT_0019588c;
          if ((*(ushort *)(DAT_001957e8 + 0x2e) & 0x100) != 0) {
            uVar2 = DAT_00195890;
          }
          return uVar2;
        }
        return DAT_00195888;
      }
      break;
    case 10:
      if (*(int *)(DAT_001957f0 + 4) == 0) {
        return DAT_001958b0;
      }
      uVar2 = DAT_00195894;
      if ((*(ushort *)(DAT_001957e8 + 0x2c) & 8) != 0) {
        uVar2 = DAT_00195898;
      }
      return uVar2;
    case 0xb:
      if (*(int *)(DAT_001957f0 + 4) == 0) {
        return DAT_001958b0;
      }
      iVar3 = FUN_0036e864(param_1,0x1c);
      if (iVar3 == 0) {
        uVar2 = DAT_001958a0;
        if ((*(ushort *)(DAT_001957e8 + 0x2c) & 0x40) != 0) {
          uVar2 = DAT_001958a4;
        }
        return uVar2;
      }
      return DAT_0019589c;
    case 0xc:
      if (*(int *)(DAT_001957f0 + 4) == 0) {
        return DAT_001958b0;
      }
      uVar2 = DAT_001958a8;
      if ((*(uint *)(DAT_001957f0 + 0xbc) & *(uint *)(DAT_0019580c + 0x4c)) != 0) {
        uVar2 = DAT_001958ac;
      }
      return uVar2;
    case 0xd:
      return DAT_001958b4;
    default:
      goto switchD_0019538c_default;
    }
    return DAT_00195884;
  }
switchD_0019538c_default:
  return uVar2;
}
