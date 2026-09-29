// OoT3D decomp @ 001544b0  name=FUN_001544b0  size=160

void FUN_001544b0(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;

  fVar1 = DAT_00154554;
  if (*(float *)(param_1 + 0x1a8) != DAT_00154554) {
    *(uint *)(*(int *)(DAT_00154550 + param_2) + 0x1714) =
         *(uint *)(*(int *)(DAT_00154550 + param_2) + 0x1714) & 0xffffffef;
    *(float *)(param_1 + 0x1a8) = fVar1;
  }
  iVar3 = FUN_003705a0(*(undefined4 *)(param_1 + 0xc),DAT_00154558,param_1 + 0x2c);
  uVar2 = DAT_0015455c;
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x10);
    *(float *)(param_1 + 0x6c) = fVar1;
    *(undefined4 *)(param_1 + 0x1bc) = uVar2;
    if (*(short *)(param_1 + 0x1c) == 0) {
      *DAT_00154560 = 7;
    }
    else if (*(short *)(param_1 + 0x1c) == 1) {
      DAT_00154560[1] = 0xe;
    }
  }
  return;
}
