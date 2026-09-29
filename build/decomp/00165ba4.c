// OoT3D decomp @ 00165ba4  name=FUN_00165ba4  size=924

void FUN_00165ba4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  int iVar7;

  iVar7 = *(int *)(DAT_00165eac + param_2);
  FUN_003510b0(param_1,DAT_00165eb0);
  uVar1 = DAT_00165ebc;
  FUN_00372d4c(DAT_00165ebc,DAT_00165eb4,param_1 + 0xbc,DAT_00165eb8);
  uVar2 = DAT_00165ec0;
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0x934,param_1,DAT_00165ec4);
  FUN_00350eb8(param_2);
  FUN_00350d48(param_2,param_1 + 0xb3c,param_1,DAT_00165ec8,param_1 + 0xb5c);
  FUN_0034f910(param_2);
  FUN_0034f760(param_2,param_1 + 0xa0c,param_1,DAT_00165ecc,param_1 + 0xa2c);
  FUN_00350a98(param_2);
  FUN_00350914(param_2,param_1 + 0x98c,param_1,DAT_00165ed0);
  FUN_00372f38(param_1,param_2,0);
  uVar2 = DAT_00165ed4;
  sVar5 = *(short *)(param_1 + 0x1c);
  if (sVar5 == -0x8000) {
    FUN_00375d3c(param_2,param_2 + 0x208c,param_1,1);
    *(undefined4 *)(param_1 + 0x8f0) = DAT_00165fd8;
    uVar1 = DAT_00165fdc;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    *(undefined4 *)(param_1 + 0x140) = uVar1;
    return;
  }
  iVar6 = param_1 + 0x5a8;
  if (sVar5 != -1) {
    if (sVar5 == 0) {
      FUN_00353c9c(param_1,param_2,param_1 + 0x1e4,1,0xe,param_1 + 0x268,iVar6,0x10);
      uVar2 = DAT_00165ed8;
      *(undefined1 *)(param_1 + 0xb7) = 6;
      *(undefined1 *)(param_1 + 0xb6) = 0xff;
      uVar3 = DAT_00165edc;
      *(undefined4 *)(param_1 + 0xa0) = uVar2;
      FUN_0037572c(uVar3,param_1);
      *(undefined4 *)(param_1 + 0x978) = DAT_00165ee0;
      *(undefined4 *)(param_1 + 0x974) = DAT_00165ee4;
      fVar4 = DAT_00165ee8;
      *(float *)(*(int *)(param_1 + 0xb58) + 0x44) =
           *(float *)(*(int *)(param_1 + 0xb58) + 0x44) * DAT_00165ee8;
      *(float *)(*(int *)(param_1 + 0xb58) + 0x34) =
           *(float *)(*(int *)(param_1 + 0xb58) + 0x34) * fVar4;
      *(undefined4 *)(param_1 + 0xfc) = DAT_00165eec;
      *(undefined4 *)(param_1 + 0x100) = DAT_00165ef0;
      *(undefined4 *)(param_1 + 0x104) = DAT_00165ef4;
      *(undefined4 *)(param_1 + 0x930) = DAT_00165ef8;
      *(undefined4 *)(param_1 + 0x9a4) = 0x20000000;
      sVar5 = FUN_003758b0(*(float *)(iVar7 + 0x30) - *(float *)(param_1 + 0x30),
                           *(float *)(iVar7 + 0x28) - *(float *)(param_1 + 0x28));
      if (0x8000 < (int)(short)(*(short *)(param_1 + 0x36) - sVar5) + 0x4000U) {
        sVar5 = *(short *)(param_1 + 0x36) + -0x8000;
        *(short *)(param_1 + 0x36) = sVar5;
        *(short *)(param_1 + 0xbe) = sVar5;
        *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + DAT_00165efc;
      }
      FUN_00372d4c(uVar1,DAT_00165f00,param_1 + 0xbc,DAT_00165f04);
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      *(char *)(param_1 + 0x123) = *(char *)(param_1 + 0x123) + '\x01';
      FUN_0036e734(param_1 + 0x1e4,0xe);
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
                    /* WARNING: Subroutine does not return */
      FUN_003702c8(0x1e,0x32);
    }
    FUN_00353c9c(param_1,param_2,param_1 + 0x1e4,0,0,param_1 + 0x268,iVar6,0x10);
    FUN_0037572c(DAT_00165fe0,param_1);
    uVar1 = DAT_00165fe4;
    *(char *)(param_1 + 0x929) = (char)((ushort)*(undefined2 *)(param_1 + 0x1c) >> 8);
    *(undefined2 *)(param_1 + 0x1c) = 1;
    *(undefined1 *)(param_1 + 0x928) = 0;
    *(undefined1 *)(param_1 + 0xb7) = 1;
    *(undefined1 *)(param_1 + 0xb6) = 0xfe;
    *(undefined4 *)(param_1 + 0x92c) = uVar1;
    *(undefined4 *)(param_1 + 0x930) = uVar2;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    FUN_0036cbc4(param_1,param_2,1);
    return;
  }
  FUN_00353c9c(param_1,param_2,param_1 + 0x1e4,0,0,param_1 + 0x268,iVar6,0x10);
  *(undefined1 *)(param_1 + 0xb7) = 2;
  uVar3 = DAT_00165f0c;
  *(undefined1 *)(param_1 + 0xb6) = 0xfe;
  *(undefined4 *)(param_1 + 0x92c) = uVar3;
  *(undefined4 *)(param_1 + 0x930) = uVar2;
  FUN_00370350(DAT_00165f10,param_1 + 0x1e4,1);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0x1e,0x32);
}
