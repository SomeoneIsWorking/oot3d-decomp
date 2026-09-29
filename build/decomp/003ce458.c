// OoT3D decomp @ 003ce458  name=FUN_003ce458  size=484

void FUN_003ce458(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  ushort *puVar4;
  uint in_fpscr;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;

  iVar3 = FUN_00370734(param_1 + 0x1a4);
  if ((iVar3 != 0) && (*(int *)(param_1 + 0x1d4) == 0x1e)) {
    FUN_003717ac(param_1 + 0x1a4,DAT_003ce63c,4);
  }
  uVar5 = DAT_003ce640;
  iVar3 = *(int *)(param_1 + 0x1d4);
  if ((((((((iVar3 == 0x22 || iVar3 == 0x23) || iVar3 == 6) || iVar3 == 7) || iVar3 == 10) ||
        iVar3 == 0xb) || iVar3 == 0xc) ||
      ((((((iVar3 == 0xd || iVar3 == 0x12) || iVar3 == 0x14) || iVar3 == 0x27) || iVar3 == 0x15) ||
       iVar3 == 0x10) || iVar3 == 0x11)) || ((iVar3 == 2 || iVar3 == 0xf) || iVar3 == 3)) {
    *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 1;
    FUN_003fd1b8(uVar5,param_2,param_1,param_1 + 0x1a4);
  }
  fVar2 = DAT_003ce650;
  fVar1 = DAT_003ce64c;
  iVar3 = *DAT_003ce644;
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_003ce648 / fVar8 + DAT_003ce64c) == (uint)*(ushort *)(param_2 + 0x22b8)) {
    *(undefined1 *)(param_1 + 0x47d) = 2;
  }
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  if ((int)(fVar2 / fVar8 + fVar1) == (uint)*(ushort *)(param_2 + 0x22b8)) {
    *(undefined2 *)(param_1 + 0x480) = 3;
    *(undefined1 *)(param_1 + 0x47d) = 0;
    *(undefined1 *)(param_1 + 0x47e) = 3;
  }
  puVar4 = *(ushort **)(DAT_003ce654 + param_2);
  if (puVar4 != (ushort *)0x0) {
    uVar5 = VectorSignedToFloat(*(undefined4 *)(puVar4 + 6),(byte)(in_fpscr >> 0x15) & 3);
    uVar6 = VectorSignedToFloat(*(undefined4 *)(puVar4 + 8),(byte)(in_fpscr >> 0x15) & 3);
    uVar7 = VectorSignedToFloat(*(undefined4 *)(puVar4 + 10),(byte)(in_fpscr >> 0x15) & 3);
    if (*(short *)(param_1 + 0x486) == 0) {
      *(undefined4 *)(param_1 + 8) = uVar5;
      *(undefined4 *)(param_1 + 0xc) = uVar6;
      *(undefined4 *)(param_1 + 0x10) = uVar7;
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x10);
    }
    if ((int)*(short *)(param_1 + 0x486) != (uint)*puVar4) {
      FUN_003717ac(param_1 + 0x1a4,DAT_003ce63c,*(undefined1 *)(DAT_003ce658 + (uint)*puVar4));
      *(ushort *)(param_1 + 0x486) = *puVar4;
    }
    uVar5 = DAT_003ce65c;
    *(undefined4 *)(param_1 + 0x60) = DAT_003ce65c;
    *(undefined4 *)(param_1 + 100) = uVar5;
    *(undefined4 *)(param_1 + 0x68) = uVar5;
  }
  return;
}
