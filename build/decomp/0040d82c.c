// OoT3D decomp @ 0040d82c  name=FUN_0040d82c  size=368

undefined4
FUN_0040d82c(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;

  if ((((-1 < param_3) &&
       (piVar2 = (int *)FUN_0040f328(*(undefined4 *)(param_1 + 4)), param_3 < *piVar2)) &&
      (iVar3 = FUN_0040f2ec(*(undefined4 *)(param_1 + 4),param_3), iVar3 != 0)) &&
     ((iVar3 = FUN_0040f214(iVar3,param_4), iVar3 != 0 &&
      (piVar2 = (int *)FUN_0040f4ec(iVar3,param_5), piVar2 != (int *)0x0)))) {
    iVar5 = *piVar2;
    iVar3 = FUN_003043b4(*(undefined4 *)(param_1 + 4));
    iVar3 = iVar3 + iVar5 * 8;
    if (*(int *)(iVar3 + 8) != -1) {
      *param_2 = *(undefined4 *)(iVar3 + 4);
      param_2[1] = *(undefined4 *)(iVar3 + 8);
      puVar4 = (undefined1 *)FUN_0040f3ec(piVar2);
      if (puVar4 == (undefined1 *)0x0) {
        uVar1 = FUN_0040f39c(piVar2);
        *(undefined1 *)((int)param_2 + 0x11) = uVar1;
        uVar1 = FUN_0040f4c4(piVar2);
        *(undefined1 *)((int)param_2 + 0x12) = uVar1;
        uVar1 = FUN_0040f42c(piVar2);
        *(undefined1 *)((int)param_2 + 0x13) = uVar1;
        uVar6 = FUN_0040f454(piVar2);
        param_2[2] = uVar6;
        uVar1 = FUN_0040f3c4(piVar2);
        *(undefined1 *)(param_2 + 5) = uVar1;
        uVar1 = FUN_0040f334(piVar2);
        *(undefined1 *)((int)param_2 + 0x15) = uVar1;
        uVar1 = FUN_0040f404(piVar2);
        *(undefined1 *)((int)param_2 + 0x16) = uVar1;
        uVar6 = FUN_0040f35c(piVar2);
        FUN_00304380(param_2 + 3,uVar6);
      }
      else {
        *(undefined1 *)((int)param_2 + 0x11) = *puVar4;
        *(undefined1 *)((int)param_2 + 0x12) = puVar4[4];
        *(undefined1 *)((int)param_2 + 0x13) = puVar4[8];
        param_2[2] = *(undefined4 *)(puVar4 + 0xc);
        *(undefined1 *)(param_2 + 5) = puVar4[0x10];
        *(undefined1 *)((int)param_2 + 0x15) = puVar4[0x11];
        *(undefined1 *)((int)param_2 + 0x16) = puVar4[0x12];
        FUN_00410b74(param_2 + 3,puVar4 + 0x20);
      }
      return 1;
    }
  }
  return 0;
}
