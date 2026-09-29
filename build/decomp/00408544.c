// OoT3D decomp @ 00408544  name=FUN_00408544  size=164

/* WARNING: Removing unreachable block (ram,0x003102f0) */
/* WARNING: Removing unreachable block (ram,0x003102fc) */
/* WARNING: Removing unreachable block (ram,0x00310320) */
/* WARNING: Removing unreachable block (ram,0x0031036c) */
/* WARNING: Removing unreachable block (ram,0x00310374) */

void FUN_00408544(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  *(undefined1 *)(param_3 + 0x112) = 0;
  if (param_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0031031c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x10))(param_3);
    return;
  }
  uVar3 = *(undefined4 *)(param_2 + 4);
  iVar1 = FUN_0030c550();
  iVar2 = FUN_0030c20c(iVar1,0xb);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x180);
  *(undefined1 *)(iVar2 + 4) = 0x23;
  *(int **)(iVar2 + 0x10) = param_3 + 0x3d;
  *(undefined4 *)(iVar2 + 0x14) = uVar3;
  *(int *)(iVar2 + 0x18) = param_3[0x10d];
  *(uint *)(iVar2 + 0x1c) = (uint)*(byte *)(param_3 + 0x10e);
  *(int *)(iVar2 + 0x20) = param_3[0x10f];
  *(int *)(iVar2 + 0x24) = param_3[0x110];
  *(int *)(iVar2 + 0x28) = param_3[0x111];
  FUN_0030c1e8(iVar1,iVar2);
  *(undefined1 *)((int)param_3 + 0x449) = 1;
  param_3[0x4b] = (int)(param_3 + 0x75);
  return;
}
