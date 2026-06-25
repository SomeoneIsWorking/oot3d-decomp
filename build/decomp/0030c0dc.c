// OoT3D decomp @ 0030c0dc  name=FUN_0030c0dc  size=188

undefined4 FUN_0030c0dc(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x168) == 0) {
    if (param_2 == 0) {
      return 0;
    }
    puVar1 = (undefined4 *)FUN_0030c20c(param_1,4);
    puVar1[3] = *(undefined4 *)(param_1 + 0x180);
    *(undefined *)(puVar1 + 1) = 0;
    if (*(undefined4 **)(param_1 + 0x16c) == (undefined4 *)0x0) {
      *(undefined4 **)(param_1 + 0x168) = puVar1;
    }
    else {
      **(undefined4 **)(param_1 + 0x16c) = puVar1;
    }
    *(undefined4 **)(param_1 + 0x16c) = puVar1;
    *puVar1 = 0;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x170);
  coproc_moveto_Data_Memory_Barrier(0);
  if (param_2 == 0) {
    iVar2 = FUN_00490d40(param_1,*(undefined4 *)(param_1 + 0x168));
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    FUN_002d2ef4();
  }
  *(undefined4 *)(*(int *)(param_1 + 0x168) + 8) = uVar3;
  *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + 1;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  return uVar3;
}

