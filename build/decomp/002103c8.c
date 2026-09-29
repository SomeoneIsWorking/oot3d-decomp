// OoT3D decomp @ 002103c8  name=FUN_002103c8  size=596

void FUN_002103c8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  uint in_fpscr;
  undefined4 uVar9;
  float fVar10;
  float fVar11;

  FUN_00372f38(param_1,param_2,param_1 + 0x1a4,0,0);
  FUN_003510b0(param_1,DAT_0021061c);
  FUN_00350eb8(param_2,param_1 + 0x1ac);
  FUN_00350d48(param_2,param_1 + 0x1ac,param_1,DAT_00210620,param_1 + 0x1cc);
  iVar6 = DAT_00210624;
  iVar4 = *(int *)(param_1 + 0x1c8);
  *(undefined4 *)(iVar4 + 0x38) = *(undefined4 *)(param_1 + 0x28);
  *(float *)(iVar4 + 0x3c) =
       *(float *)(param_1 + 0x2c) +
       *(float *)(((uint)(int)*(short *)(param_1 + 0x1c) >> 8 & 4) + iVar6);
  *(undefined4 *)(iVar4 + 0x40) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(*(int *)(param_1 + 0x1c8) + 0x44) = DAT_00210628;
  if (((~(int)*(short *)(param_1 + 0x1c) & 0xffU) != 0) &&
     (1 < *(byte *)(*(int *)(param_2 + 0x5c20) + ((int)*(short *)(param_1 + 0x1c) & 0xffU) * 8))) {
    FUN_00350d20(param_1 + 0xa0,0,DAT_0021062c);
    FUN_00372d4c(*(undefined4 *)(((uint)(int)*(short *)(param_1 + 0x1c) >> 8 & 4) + DAT_00210630),
                 DAT_00210634,param_1 + 0xbc,DAT_00210638);
    *(undefined1 *)(param_1 + 0xd0) = 200;
    if (*(short *)(param_2 + 0x104) == 0x55) {
      *(undefined1 *)(param_1 + 0x23e) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x23e) = 0;
    }
    uVar1 = DAT_0021063c;
    *(ushort *)(param_1 + 0x236) =
         *(byte *)(*(int *)(param_2 + 0x5c20) + (*(ushort *)(param_1 + 0x1c) & 0xff) * 8) - 1;
    *(undefined2 *)(param_1 + 0x238) = 0;
    *(undefined2 *)(param_1 + 0x23a) = 1;
    *(undefined2 *)(param_1 + 0x23c) = 1;
    psVar5 = *(short **)(*(int *)(param_2 + 0x5c20) + (*(ushort *)(param_1 + 0x1c) & 0xff) * 8 + 4);
    uVar9 = VectorSignedToFloat((int)*psVar5,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x28) = uVar9;
    uVar9 = VectorSignedToFloat((int)psVar5[1],(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x2c) = uVar9;
    uVar9 = VectorSignedToFloat((int)psVar5[2],(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x30) = uVar9;
    *(undefined4 *)(param_1 + 0x21c) = uVar1;
    *(undefined4 *)(param_1 + 0x22c) = uVar1;
    iVar6 = *(int *)(*(int *)(param_2 + 0x5c20) + (*(ushort *)(param_1 + 0x1c) & 0xff) * 8 + 4);
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 6),(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 10),(byte)(in_fpscr >> 0x15) & 3);
    uVar2 = FUN_003758b0(fVar11 - *(float *)(param_1 + 0x30),fVar10 - *(float *)(param_1 + 0x28));
    *(undefined2 *)(param_1 + 0x36) = uVar2;
    *(undefined4 *)(param_1 + 0x1a8) = DAT_00210640;
    *(byte *)(param_1 + 0x23f) = *(byte *)(param_1 + 0x23f) & 0xfc | 3;
    *(undefined4 *)(param_1 + 0x22c) = uVar1;
    uVar3 = *(ushort *)(param_2 + 0x104);
    bVar7 = uVar3 == 9;
    if (bVar7) {
      uVar3 = (ushort)*(byte *)(DAT_00210644 + 0xe);
    }
    bVar8 = bVar7 && uVar3 == 1;
    if (bVar7 && uVar3 == 1) {
      bVar8 = *(char *)(DAT_00210648 + param_2) == '\b';
    }
    if ((bVar8) && (*(short *)(param_1 + 0x1c) == 0xd03)) {
      *(undefined4 *)(param_1 + 0x6c) = DAT_0021064c;
    }
    return;
  }
  FUN_00374428(param_1);
  return;
}
