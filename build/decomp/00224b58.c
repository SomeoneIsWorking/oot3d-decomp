// OoT3D decomp @ 00224b58  name=FUN_00224b58  size=896

void FUN_00224b58(int param_1,int param_2)

{
  short sVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;

  iVar3 = FUN_00363c10(param_2 + 0x3a58,
                       (int)*(short *)(DAT_00224fb4 + *(short *)(param_1 + 0x1c) * 2));
  if (-1 < iVar3) {
    *(char *)(param_1 + 0x1a4) = (char)iVar3;
  }
  iVar3 = 0;
  do {
    iVar6 = param_1 + iVar3 * 0x28;
    iVar7 = param_1 + iVar3 * 4;
    *(undefined1 *)(iVar6 + 0x1ca) = 0;
    *(undefined4 *)(iVar7 + 0x1920) = 0;
    iVar3 = (int)(short)((short)iVar3 + 2);
    *(undefined1 *)(iVar6 + 0x1f2) = 0;
    *(undefined4 *)(iVar7 + 0x1924) = 0;
  } while (iVar3 < 0x96);
  *(undefined4 *)(param_1 + 0x191c) = 0;
  *(undefined4 *)(param_1 + 0x1b78) = 0;
  iVar3 = DAT_00224fdc;
  uVar4 = DAT_00224fc8;
  puVar2 = DAT_00224fb8;
  switch(*(undefined2 *)(param_1 + 0x1c)) {
  case 0:
  case 1:
    sVar1 = *(short *)(param_2 + 0x104);
    if (sVar1 == 0x43) {
      *DAT_00224fb8 = 0xe;
      uVar5 = 8;
    }
    else {
      if (sVar1 == 0x47) {
        if (*(int *)(DAT_00224fbc + param_2) != 0) {
          *(undefined1 *)(*(int *)(DAT_00224fbc + param_2) + 0xad) = 0;
        }
        puVar2 = DAT_00224fb8;
        *DAT_00224fb8 = 10;
        puVar2[1] = 8;
        break;
      }
      if (sVar1 != 0x51) {
        FUN_00374428(param_1);
        break;
      }
      *DAT_00224fb8 = 1;
      uVar5 = 5;
    }
    puVar2[1] = uVar5;
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    if (*(int *)(DAT_00224fbc + param_2) != 0) {
      *(undefined1 *)(*(int *)(DAT_00224fbc + param_2) + 0xad) = 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  case 7:
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  case 0xd:
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x400000;
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(undefined4 *)(param_1 + 0x1c0) = DAT_00224fd8;
    if ((*(ushort *)(iVar3 + 0xf4) & 0x800) == 0) {
      FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                   *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,0x70,0,0,0,0);
    }
    else {
      *(undefined2 *)(DAT_00224fe0 + param_2) = 0xff;
      FUN_00374428(param_1);
    }
    break;
  case 0xe:
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x400000;
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(undefined4 *)(param_1 + 0x1c0) = DAT_00224fd8;
    break;
  case 0xf:
  case 0x10:
    FUN_00375d3c(param_2,param_2 + 0x208c,param_1,7);
    fVar9 = DAT_00224fe8;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x2000000;
    *(undefined1 *)(param_1 + 3) = 0xff;
    uVar4 = DAT_00224fc8;
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00224fe4 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    *(char *)(param_1 + 0x1a6) = (char)(int)(fVar9 / fVar8 + DAT_00224fc0);
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(undefined1 *)(param_1 + 0x1a5) = 0;
    if (*(short *)(param_1 + 0x1c) == 0xf) {
      FUN_0037547c(DAT_00224ff4,0,4,DAT_00224ff0,DAT_00224ff0,DAT_00224fec);
    }
    break;
  case 0x11:
  case 0x12:
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00224fe4 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    *(char *)(param_1 + 0x1a6) = (char)(int)(DAT_00224fe8 / fVar9 + DAT_00224fc0);
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(undefined1 *)(param_1 + 0x1a5) = 0;
    *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_1 + 0x1a4);
    iVar3 = FUN_0035010c(0x28);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_003500c4();
    }
    *(undefined4 *)(param_1 + 0x191c) = uVar4;
    FUN_0034ff2c(uVar4,1,1,0x14,2,0);
    FUN_0034fea8(*(undefined4 *)(param_1 + 0x191c),(int)*(char *)(param_1 + 0x1e),param_2,2,
                 DAT_00224ffc,DAT_00224ffc,DAT_00224ff8,DAT_00224ff8);
    *(undefined4 *)(param_1 + 0x1b78) = 1;
  }
  *(undefined4 *)(DAT_00225004 + param_1) = DAT_00225000;
  return;
}
