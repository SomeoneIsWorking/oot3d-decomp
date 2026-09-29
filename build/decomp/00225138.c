// OoT3D decomp @ 00225138  name=FUN_00225138  size=904

void FUN_00225138(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  undefined4 uVar8;

  uVar5 = DAT_002254d4;
  uVar8 = DAT_002254d0;
  *(undefined4 *)(param_1 + 0x254) = DAT_002254d0;
  *(undefined2 *)(param_1 + 0x266) = 0;
  FUN_0037572c(uVar5);
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  FUN_00353dd0(param_2,param_1 + 0x1a4);
  FUN_00353d24(param_2,param_1 + 0x1a4,param_1,DAT_002254d8);
  FUN_00353dd0(param_2,param_1 + 0x1fc);
  FUN_00353d24(param_2,param_1 + 0x1fc,param_1,DAT_002254d8);
  FUN_0037632c(param_1,param_1 + 0x1a4);
  FUN_0037632c(param_1,param_1 + 0x1fc);
  uVar2 = DAT_002254e0;
  uVar1 = DAT_002254dc;
  *(undefined4 *)(param_1 + 0x25c) = DAT_002254dc;
  *(undefined4 *)(param_1 + 0x260) = uVar8;
  *(undefined2 *)(param_1 + 0x264) = 0;
  fVar3 = DAT_002254e8;
  switch(*(undefined2 *)(param_1 + 0x1c)) {
  case 0:
    *(undefined4 *)(param_1 + 0x268) = DAT_002254e4;
    fVar4 = DAT_002254ec;
    uVar8 = VectorSignedToFloat((int)(short)(int)(*(float *)(param_1 + 0x54) * fVar3),
                                (byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x23c) = uVar8;
    uVar8 = VectorSignedToFloat((int)(short)(int)(*(float *)(param_1 + 0x58) * fVar4),
                                (byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x240) = uVar8;
    *(undefined4 *)(param_1 + 0x244) = DAT_002254f0;
    uVar8 = FUN_00372f38(param_1,param_2,param_1 + 0x26c,4,0);
    uVar8 = FUN_00372f0c(uVar8,0);
    FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x26c) + 0xc),uVar8);
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x26c) + 0xc) + 0x10) = 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x26c) + 0xc) + 0xc) = uVar2;
    FUN_0047d548(*(undefined4 *)(param_1 + 0x26c),2);
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    *(undefined4 *)(param_1 + 0x254) = uVar8;
    *(undefined4 *)(param_1 + 600) = uVar8;
    FUN_0037572c(uVar5,param_1);
    fVar3 = DAT_002254fc;
    *(undefined4 *)(param_1 + 0x13c) = DAT_002254f4;
    *(undefined4 *)(param_1 + 0x140) = DAT_002254f8;
    fVar4 = DAT_00225500;
    uVar8 = VectorSignedToFloat((int)(short)(int)(*(float *)(param_1 + 0x54) * fVar3),
                                (byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x1e4) = uVar8;
    fVar3 = DAT_00225504;
    uVar8 = VectorSignedToFloat((int)(short)(int)(*(float *)(param_1 + 0x58) * fVar4),
                                (byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x1e8) = uVar8;
    *(undefined4 *)(param_1 + 0x1ec) = uVar1;
    fVar4 = DAT_00225508;
    uVar8 = VectorSignedToFloat((int)(short)(int)(*(float *)(param_1 + 0x54) * fVar3),
                                (byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x23c) = uVar8;
    uVar8 = VectorSignedToFloat((int)(short)(int)(*(float *)(param_1 + 0x58) * fVar4),
                                (byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x240) = uVar8;
    *(undefined4 *)(param_1 + 0x244) = DAT_0022550c;
    uVar8 = FUN_00372f38(param_1,param_2,param_1 + 0x26c,8,0);
    FUN_00372f38(param_1,param_2,param_1 + 0x270,7,0);
    FUN_00372f38(param_1,param_2,param_1 + 0x274,5,0);
    uVar5 = FUN_00372f0c(uVar8,(int)*(short *)(param_1 + 0x1c));
    FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x26c) + 0xc),uVar5);
    uVar5 = FUN_00372f0c(uVar8,7);
    FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0xc),uVar5);
    uVar5 = FUN_00372f0c(uVar8,8);
    FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x274) + 0xc),uVar5);
    iVar7 = 0;
    do {
      iVar6 = param_1 + iVar7 * 4;
      *(undefined1 *)(*(int *)(*(int *)(iVar6 + 0x26c) + 0xc) + 0x10) = 1;
      *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x26c) + 0xc) + 0xc) = uVar2;
      FUN_0047d548(*(undefined4 *)(iVar6 + 0x26c),2);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    uVar8 = ObjectBankArchive_00358ef8(uVar8,8);
    *(undefined4 *)(param_1 + 0x278) = uVar8;
  }
  if (((uint)(int)*(short *)(param_1 + 0x1c) < 7) &&
     (iVar7 = FUN_00350cf4(*(undefined4 *)(DAT_00225510 + *(short *)(param_1 + 0x1c) * 4)),
     iVar7 == 0)) {
    return;
  }
  if (*(short *)(param_1 + 0x1c) == 0) {
    *(undefined1 *)(DAT_00225514 + param_2) = 1;
  }
  FUN_00374428(param_1);
  return;
}
