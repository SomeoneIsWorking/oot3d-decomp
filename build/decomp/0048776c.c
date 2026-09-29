// OoT3D decomp @ 0048776c  name=FUN_0048776c  size=220

void FUN_0048776c(int *param_1,int *param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;

  param_1[0x1d] = param_4;
  iVar4 = 0;
  for (uVar1 = param_3; uVar1 != 0; uVar1 = uVar1 >> 1) {
    if ((uVar1 & 1) != 0) {
      iVar4 = iVar4 + 1;
    }
  }
  iVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  if (iVar4 <= iVar2) {
    iVar4 = 0;
    for (; param_3 != 0; param_3 = param_3 >> 1) {
      if (((param_3 & 1) != 0) &&
         (iVar2 = (**(code **)(*param_2 + 8))(param_2,param_1), iVar4 < 0x10)) {
        param_1[iVar4 + 0x21] = iVar2;
        *(char *)(iVar2 + 4) = (char)iVar4;
        *(undefined1 *)(iVar2 + 0x41) = *(undefined1 *)((int)param_1 + 0x26);
      }
      iVar4 = iVar4 + 1;
    }
    uVar3 = FUN_00309b60();
    FUN_00308b70(uVar3,param_1 + 0xf);
    param_1[0x1e] = (int)param_2;
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004877c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))(param_1);
  return;
}
