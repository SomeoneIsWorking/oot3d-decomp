// OoT3D decomp @ 00173370  name=FUN_00173370  size=564

undefined1 FUN_00173370(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined1 uVar8;
  bool bVar9;

  uVar8 = 1;
  uVar5 = FUN_003769d8(param_1 + 0x28a0);
  fVar4 = DAT_001735c4;
  uVar3 = DAT_001735c0;
  switch(uVar5) {
  default:
    goto switchD_001733ac_caseD_0;
  case 3:
    uVar7 = *(ushort *)(param_2 + 0x116) - 0x4014;
    if (uVar7 == 0) {
      if (*(char *)(param_2 + 0xd3c) != '\0') {
        return 1;
      }
      FUN_00372244(param_1 + 0x5fcc,0x1e,DAT_001735d0);
      *(undefined1 *)(param_2 + 0xd3c) = 1;
      return 1;
    }
    bVar9 = uVar7 == 7;
    if (bVar9) {
      uVar7 = (uint)*(byte *)(param_2 + 0xd3c);
    }
    if (!bVar9 || uVar7 != 0) {
      return 1;
    }
    FUN_00372244(param_1 + 0x5fcc,0x1e,DAT_001735cc);
    *(undefined1 *)(param_2 + 0xd3c) = 1;
    return 1;
  case 4:
    iVar6 = FUN_00346964(param_1);
    if (iVar6 == 0) {
      return 1;
    }
    if (*(short *)(param_2 + 0x116) != 0x4014) {
      return 1;
    }
    iVar6 = FUN_00369f3c(param_1);
    if (iVar6 != 0) {
      *(short *)(param_2 + 0x116) = (short)DAT_001735d4;
      FUN_0036be34(param_1);
      return 1;
    }
    iVar6 = FUN_00371e40(param_2,param_1);
    if (iVar6 == 0) {
      cVar1 = *(char *)(param_2 + 0xd3d);
joined_r0x0017345c:
      if (cVar1 == '\x01') {
        uVar8 = 0x24;
      }
      else {
        uVar8 = 0x2d;
      }
      *(undefined1 *)(param_2 + 0xf4c) = uVar8;
      FUN_003724dc(*(float *)(param_2 + 0x98) + fVar4,ABS(*(float *)(param_2 + 0x9c)) + fVar4,
                   param_2,param_1);
    }
    else {
LAB_00173430:
      *(undefined4 *)(param_2 + 0x124) = 0;
      *(undefined2 *)(param_2 + 0xd14) = 1;
      *(undefined4 *)(param_2 + 0xcb8) = uVar3;
    }
    break;
  case 5:
    iVar6 = FUN_00346964(param_1);
    if (iVar6 == 0) {
      return 1;
    }
    break;
  case 6:
    sVar2 = *(short *)(param_2 + 0x116);
    if (sVar2 == 0x4012) {
      *(ushort *)(DAT_001735c8 + 0x36) = *(ushort *)(DAT_001735c8 + 0x36) | 0x200;
      return 2;
    }
    if (sVar2 != 0x401b) {
      if (sVar2 == 0x401f) {
        *(ushort *)(DAT_001735c8 + 0x36) = *(ushort *)(DAT_001735c8 + 0x36) | 0x200;
        return 0;
      }
      if (sVar2 != 0x40b4) {
        return 0;
      }
      *(ushort *)(DAT_001735c8 + 0x36) = *(ushort *)(DAT_001735c8 + 0x36) | 0x200;
      iVar6 = FUN_00371e40(param_2,param_1);
      if (iVar6 == 0) {
        cVar1 = *(char *)(param_2 + 0xd3d);
        goto joined_r0x0017345c;
      }
      goto LAB_00173430;
    }
    iVar6 = FUN_00346964(param_1);
    if (iVar6 == 0) {
      return 1;
    }
  }
  uVar8 = 2;
switchD_001733ac_caseD_0:
  return uVar8;
}
