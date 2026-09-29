// OoT3D decomp @ 0035f830  name=FUN_0035f830  size=316

undefined4 FUN_0035f830(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];

  iVar2 = *(int *)(DAT_0035f96c + param_2);
  if ((((*(uint *)(DAT_0035f970 + iVar2) & 0x200000) != 0) || (param_3 == 0)) &&
     (iVar1 = FUN_0035f250(param_2), iVar1 == 0 || param_3 == 0)) {
    iVar1 = FUN_0035f7a8(param_1,iVar2 + 0x28);
    if (iVar1 - *(short *)(param_1 + 0xc0) < 0) {
      iVar1 = FUN_0035f7a8(param_1,iVar2 + 0x28);
      iVar1 = *(short *)(param_1 + 0xc0) - iVar1;
    }
    else {
      iVar1 = FUN_0035f7a8(param_1,iVar2 + 0x28);
      iVar1 = iVar1 - *(short *)(param_1 + 0xc0);
    }
    if (((iVar1 <= DAT_0035f974) &&
        (fVar5 = *(float *)(iVar2 + 0x28) - *(float *)(param_1 + 0x28),
        fVar3 = *(float *)(iVar2 + 0x2c) - *(float *)(param_1 + 0x2c),
        fVar4 = *(float *)(iVar2 + 0x30) - *(float *)(param_1 + 0x30),
        (int)SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4) < DAT_0035f978)) &&
       (iVar2 = FUN_00369f9c(param_2 + 0xa98,param_1 + 0x28,iVar2 + 0x28,auStack_28,auStack_18,1,0,0
                             ,1,auStack_1c), iVar2 == 0)) {
      return 1;
    }
  }
  return 0;
}
