// OoT3D decomp @ 001cf7d0  name=FUN_001cf7d0  size=288

void FUN_001cf7d0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  undefined4 uVar5;

  iVar3 = *(int *)(DAT_001cf8f0 + param_2);
  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 5) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    uVar2 = FUN_0036ae14(param_1 + 0x1a4,6);
    uVar5 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    uVar2 = FUN_0036ae14(param_1 + 0x1a4,6);
    fVar4 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_001cf8f4,fVar4 - DAT_001cf8f4,uVar5,DAT_001cf8f8,param_1 + 0x1a4,6,2);
    *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) & 0xffef;
    FUN_003725e0(param_2);
    uVar2 = DAT_001cf900;
    *(undefined4 *)(param_1 + 0xbac) = DAT_001cf8fc;
    iVar1 = param_1 + (uint)*(byte *)(param_1 + 0xc26) * 4;
    *(undefined4 *)(*(int *)(iVar1 + 0xc14) + 0x70) = uVar2;
    uVar2 = DAT_001cf904;
    *(undefined4 *)(*(int *)(iVar1 + 0xc14) + 100) = DAT_001cf904;
    *(undefined4 *)(*(int *)(iVar1 + 0xc14) + 0x6c) = uVar2;
    *(undefined4 *)(*(int *)(iVar1 + 0xc14) + 0x124) = 0;
    if (*(int *)(iVar3 + 0x12b0) == *(int *)(iVar1 + 0xc14)) {
      *(undefined4 *)(iVar3 + 0x12b0) = 0;
    }
    if (*(int *)(iVar3 + 0x1224) == *(int *)(iVar1 + 0xc14)) {
      *(undefined4 *)(iVar3 + 0x1224) = 0;
    }
    *(uint *)(iVar3 + 0x1710) = *(uint *)(iVar3 + 0x1710) & 0xfffff7ff;
    *(undefined4 *)(iVar1 + 0xc14) = 0;
  }
  *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) | 1;
  return;
}
