// OoT3D decomp @ 001514f8  name=FUN_001514f8  size=436

void FUN_001514f8(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  float fVar14;
  undefined1 auStack_7c [40];

  iVar12 = *(int *)(param_1 + 0x124);
  *(short *)(param_1 + 0xace) = *(short *)(param_1 + 0xace) + 1;
  *(undefined1 *)(iVar12 + 0xacc) = 1;
  uVar13 = FUN_0036e81c(param_2 + 0xa98,param_1 + 0x7c,auStack_7c,param_1,param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x84) = uVar13;
  iVar9 = DAT_001518d0;
  uVar7 = DAT_001518cc;
  uVar6 = DAT_001518c8;
  fVar5 = DAT_001518c0;
  uVar4 = DAT_001518bc;
  uVar3 = DAT_001518b8;
  uVar13 = DAT_001518b4;
  fVar2 = DAT_001518b0;
  fVar1 = DAT_001518ac;
  if (*(short *)(param_1 + 0xad4) == 0) {
    FUN_00375bcc(param_1,DAT_001518e0);
    if ((*(ushort *)(param_1 + 0xace) & 1) == 0) {
      FUN_0037572c(DAT_001518e8,param_1);
    }
    else {
      FUN_0037572c(DAT_001518e4,param_1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if (*(short *)(param_1 + 0xad4) == 2) {
    FUN_0036fc20(DAT_001518cc,DAT_001518c4,param_1 + 0xaf8);
    FUN_00373500(uVar4,uVar13,uVar6,param_1 + 0x54);
  }
  else {
    *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0xaab;
    *(undefined2 *)(iVar9 + iVar12) = 1;
    puVar8 = DAT_001518d4;
    uVar10 = *(undefined4 *)(param_1 + 0x2c);
    uVar11 = *(undefined4 *)(param_1 + 0x30);
    *DAT_001518d4 = *(undefined4 *)(param_1 + 0x28);
    puVar8[1] = uVar10;
    puVar8[2] = uVar11;
    FUN_0036fc20(uVar7,uVar4,param_1 + 0xaf8);
    FUN_00373500(uVar3,uVar13,uVar6,param_1 + 0x54);
    iVar9 = FUN_003695f8();
    if (iVar9 == 0) {
      fVar14 = (float)FUN_00371e50(DAT_001518d8);
      *(float *)(param_1 + 0xaf4) =
           *(float *)(param_1 + 0xaf4) + (fVar14 + DAT_001518dc) * fVar1 * fVar2;
    }
  }
  FUN_0037572c(*(undefined4 *)(param_1 + 0x54),param_1);
  if (*(float *)(param_1 + 0xaf8) == fVar5) {
    FUN_00374428(param_1);
  }
  return;
}
