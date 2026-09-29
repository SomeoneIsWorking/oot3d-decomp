// OoT3D decomp @ 00275264  name=FUN_00275264  size=180

void FUN_00275264(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  float fVar3;

  iVar2 = DAT_00275328;
  if (*(int *)(param_1 + 0x98) < DAT_00275318) {
    fVar3 = ABS(*(float *)(param_1 + 0x9c));
    if (((((int)fVar3 < DAT_0027531c) && (DAT_0027531c + -0x1000000 < (int)fVar3)) &&
        (cVar1 = *(char *)(*(int *)(DAT_00275324 + param_2) +
                          (uint)(*(ushort *)(param_1 + 0x1c) >> 10) * 0x10 +
                          (uint)(*(float *)(param_1 + 0x9c) <= DAT_00275320) * 2),
        *(char *)(param_1 + 3) = cVar1, cVar1 != *(char *)(iVar2 + param_2))) &&
       (iVar2 = FUN_0033b6bc(param_2,param_2 + 0x4c30), iVar2 != 0)) {
      FUN_0033b608();
      *(undefined4 *)(param_1 + 0x1a8) = DAT_0027532c;
    }
  }
  return;
}
