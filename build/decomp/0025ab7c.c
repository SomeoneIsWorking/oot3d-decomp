// OoT3D decomp @ 0025ab7c  name=FUN_0025ab7c  size=220

undefined4 FUN_0025ab7c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  float local_20 [2];
  float local_18;

  iVar3 = *(int *)(param_2 + 0x20ac);
  if (((*(char *)(param_1 + 0x1d0) == '\0') || (iVar1 = FUN_0032d8d8(param_1), iVar1 == 0)) &&
     (*(float *)(param_1 + 0x98) <=
      *(float *)(((uint)(int)*(short *)(param_1 + 0x1c) >> 9 & 0x1c) + DAT_0025ac58))) {
    FUN_0036c5d8(param_1,local_20,*(int *)(param_2 + 0x20ac) + 0x28);
    fVar5 = DAT_0025ac60 + *(float *)(param_1 + 0x54) * DAT_0025ac5c;
    local_20[0] = ABS(local_20[0]);
    bVar4 = NAN(local_20[0]) || NAN(fVar5);
    if (local_20[0] <= fVar5) {
      local_20[0] = ABS(local_18);
      bVar4 = NAN(local_20[0]) || NAN(fVar5);
    }
    if (local_20[0] != fVar5 && local_20[0] < fVar5 == bVar4) {
      uVar2 = *(uint *)(iVar3 + 0x1714);
      if ((uVar2 & 0x1000000) == 0) {
        *(uint *)(iVar3 + 0x1714) = uVar2 | 0x800000;
      }
      else {
        FUN_0037073c(param_2,1);
        *(undefined4 *)(param_1 + 0x1c0) = DAT_0025ac64;
      }
    }
  }
  return 0;
}
