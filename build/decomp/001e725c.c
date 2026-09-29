// OoT3D decomp @ 001e725c  name=FUN_001e725c  size=352

void FUN_001e725c(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 extraout_r1;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  float fVar9;

  FUN_003731e0(param_1 + 0x1a4);
  bVar1 = FUN_003705a0(DAT_001e73c0,DAT_001e73bc,param_1 + 0x2c);
  bVar2 = FUN_00370378(param_1 + 0xbe,(int)*(short *)(param_1 + 0x240),0x200);
  bVar3 = FUN_00370378(param_1 + 0x36,(int)*(short *)(param_1 + 0x240),0x400);
  iVar4 = DAT_001e73c4;
  iVar8 = FUN_0036e168(*(undefined4 *)(*(int *)(DAT_001e73c4 + 0x30) + 0x98),DAT_001e73d0,
                       DAT_001e73cc,DAT_001e73c8,param_1 + 0xedc);
  bVar7 = iVar8 < DAT_001e73d4;
  fVar9 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
  *(float *)(param_1 + 0x28) =
       *(float *)(*(int *)(iVar4 + 0x30) + 0x28) + *(float *)(param_1 + 0xedc) * fVar9;
  fVar9 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
  iVar4 = *(int *)(iVar4 + 0x30);
  bVar7 = (bVar7 & bVar1 & bVar2 & bVar3) == 0;
  uVar6 = extraout_r1;
  if (bVar7) {
    uVar6 = DAT_001e73d8;
  }
  iVar8 = iVar4;
  if (bVar7) {
    iVar8 = param_1;
  }
  *(float *)(param_1 + 0x30) = *(float *)(iVar4 + 0x30) + *(float *)(param_1 + 0xedc) * fVar9;
  if (!bVar7) {
    FUN_00374a58(DAT_001e73e0,param_1 + 0x1a4,
                 *(undefined4 *)(DAT_001e73dc + *(short *)(param_1 + 0x1c) * 4));
    iVar4 = 5;
    *(byte *)(param_1 + 0xefc) = *(byte *)(param_1 + 0xefc) | 1;
    puVar5 = (undefined1 *)(*(int *)(param_1 + 0xf08) + 5);
    *puVar5 = 0x10;
    do {
      iVar4 = iVar4 + -1;
      puVar5[0x50] = 0x10;
      puVar5 = puVar5 + 0xa0;
      *puVar5 = 0x10;
    } while (iVar4 != 0);
    *(ushort *)(param_1 + 0x240) =
         *(short *)(param_1 + 0x16) + (ushort)*(byte *)(param_1 + 0x230) * -0x2000;
    *(undefined2 *)(param_1 + 0x238) = 0x300;
    *(undefined2 *)(param_1 + 0x236) = 0;
    *(undefined1 *)(param_1 + 0x231) = 0;
    FUN_00375bcc(param_1,DAT_001e73e4);
    *(undefined4 *)(param_1 + 0x22c) = DAT_001e73e8;
    return;
  }
  *(uint *)(iVar8 + 4) = *(uint *)(iVar8 + 4) & 0xefc7ffff;
  *(undefined4 *)(iVar8 + 0x24) = uVar6;
  return;
}
