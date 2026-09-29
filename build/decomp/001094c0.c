// OoT3D decomp @ 001094c0  name=FUN_001094c0  size=492

void FUN_001094c0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_3c;
  float local_38;
  float local_34;

  fVar1 = DAT_001096b4;
  fVar8 = DAT_001096b0;
  uVar3 = DAT_001096ac;
  iVar4 = 0;
  if (*(char *)(param_1 + 0x6a4) != '\0') {
    *(char *)(param_1 + 0x6a4) = *(char *)(param_1 + 0x6a4) + -1;
  }
  do {
    FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
    fVar5 = (float)FUN_00338f60();
    FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
    fVar6 = (float)FUN_002cfca0();
    iVar2 = (uint)*(byte *)(param_1 + 0x6a4) + iVar4 * 2;
    if ((iVar2 / 4) * 4 - iVar2 == 0) {
      fVar7 = (float)FUN_003738a8(uVar3);
      iVar2 = (int)(short)((short)iVar4 * 0x4000 + (short)(int)fVar7 + 0x2000);
      fVar7 = (float)FUN_002cfca0(iVar2);
      local_3c = *(float *)(param_1 + 0x28) + fVar7 * fVar8 * -fVar5;
      fVar5 = (float)FUN_00338f60(iVar2);
      local_38 = (*(float *)(param_1 + 0x2c) - fVar5 * fVar8) + fVar1;
      fVar5 = (float)FUN_002cfca0(iVar2);
      local_34 = *(float *)(param_1 + 0x30) + fVar5 * fVar8 * fVar6;
      FUN_0036e78c(param_2,&local_3c,DAT_001096b8 + -4,DAT_001096b8,0x11,iVar2,6,2);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  FUN_00373264(param_1,DAT_001096bc);
  if (*(byte *)(param_1 + 0x6a4) != 0) {
    if ((*(byte *)(param_1 + 0x6a4) & 1) == 0) {
      fVar8 = *(float *)(param_1 + 0x2c) - DAT_001096c8;
    }
    else {
      fVar8 = *(float *)(param_1 + 0x2c) + DAT_001096c8;
    }
    *(float *)(param_1 + 0x2c) = fVar8;
    return;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  *(byte *)(param_1 + 0x7c1) = *(byte *)(param_1 + 0x7c1) | 1;
  uVar3 = DAT_001096c0;
  if (*(short *)(param_1 + 0x1c) == 1) {
    FUN_00373d40(param_1 + 0x1a4,2);
    FUN_00375ed8(param_1,0x400000,0x96,0x200000,0x1e);
    *(undefined2 *)(param_1 + 0x1c) = 0;
    *(undefined1 *)(param_1 + 0x8b8) = 10;
    *(byte *)(param_1 + 0x7c1) = *(byte *)(param_1 + 0x7c1) & 0xfe;
    uVar3 = DAT_001096c4;
  }
  *(undefined4 *)(param_1 + 0x6a0) = uVar3;
  return;
}
