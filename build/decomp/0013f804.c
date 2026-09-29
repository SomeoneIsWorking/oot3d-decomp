// OoT3D decomp @ 0013f804  name=FUN_0013f804  size=196

void FUN_0013f804(int param_1)

{
  short sVar1;
  float fVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  float fVar5;

  FUN_003731e0(param_1 + 0x1a4);
  FUN_00370378(param_1 + 0xbc,0xffffc000);
  *(short *)(param_1 + 0xc0) = *(short *)(param_1 + 0xc0) + 0x1000;
  if (((*(short *)(param_1 + 0x22c) == 0) ||
      (sVar1 = *(short *)(param_1 + 0x22c) + -1, *(short *)(param_1 + 0x22c) = sVar1, sVar1 == 0))
     || ((*(ushort *)(param_1 + 0x90) & 0x10) != 0)) {
    FUN_00370350(DAT_0013f8c8,param_1 + 0x1a4,5);
    fVar2 = DAT_0013f8cc;
    fVar5 = *(float *)(param_1 + 0x1f0);
    if (DAT_0013f8cc < fVar5) {
      uVar4 = (undefined2)(int)(DAT_0013f8d0 + fVar5 * DAT_0013f8d4);
    }
    else {
      uVar4 = (undefined2)(int)(fVar5 * DAT_0013f8d4 - DAT_0013f8d0);
    }
    *(undefined2 *)(param_1 + 0x22c) = uVar4;
    *(float *)(param_1 + 0x6c) = fVar2;
    *(float *)(param_1 + 100) = fVar2;
    uVar3 = DAT_0013f8d8;
    *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 0x11c) | 0x200000;
    *(undefined4 *)(param_1 + 0x228) = uVar3;
  }
  return;
}
