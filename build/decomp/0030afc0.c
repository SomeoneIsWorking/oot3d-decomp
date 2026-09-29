// OoT3D decomp @ 0030afc0  name=FUN_0030afc0  size=368

void FUN_0030afc0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;

  if ((char)param_1[0x21] != '\0') {
    if (*(char *)((int)param_1 + 0x86) != '\0') {
      iVar1 = FUN_0030c550();
      iVar2 = FUN_0030c20c(iVar1,6);
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x180);
      *(undefined1 *)(iVar2 + 4) = 6;
      uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
      *(undefined4 *)(iVar2 + 0x10) = uVar3;
      *(char *)(iVar2 + 0x14) = (char)param_1[0x22];
      FUN_0030c1e8(iVar1,iVar2);
    }
    *(undefined1 *)((int)param_1 + 0x89) = 0;
    *(undefined1 *)((int)param_1 + 0x8a) = 3;
    param_1[0x27] = -1;
    if (param_1[2] != 0) {
      FUN_00313bdc();
    }
    if (param_1[3] != 0) {
      FUN_00313bdc();
    }
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x1c))(param_1);
    }
    if (param_1[1] != 0) {
      FUN_00402904(param_1[4],param_1);
    }
    if (param_1[4] != 0) {
      FUN_00404354(param_1[4],param_1);
    }
    if (param_1[6] != 0) {
      FUN_0030a68c(param_1[6],param_1);
    }
    piVar4 = (int *)param_1[9];
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))(piVar4,param_1[10],param_1);
      param_1[10] = 0;
    }
    *(undefined1 *)((int)param_1 + 0x86) = 0;
    *(undefined1 *)(param_1 + 0x22) = 0;
    iVar1 = FUN_0030c550();
    iVar2 = FUN_0030c20c(iVar1,6);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x180);
    *(undefined1 *)(iVar2 + 4) = 4;
    uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
    *(undefined4 *)(iVar2 + 0x10) = uVar3;
    FUN_0030c1e8(iVar1,iVar2);
    *(undefined1 *)(param_1 + 0x21) = 0;
  }
  return;
}
