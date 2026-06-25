// OoT3D decomp @ 0032c2c0  name=FUN_0032c2c0  size=312

void FUN_0032c2c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined uVar3;
  int iVar4;
  
  iVar2 = DAT_0032c400;
  iVar1 = DAT_0032c3fc;
  iVar4 = param_2 * 5 + DAT_0032c3f8;
  *(undefined *)(param_1 + 0x1b4) = *(undefined *)(iVar4 + 1);
  *(undefined *)(param_1 + 0x1b5) = *(undefined *)(iVar4 + 2);
  *(undefined *)(param_1 + 0x1b6) = *(undefined *)(iVar4 + 3);
  *(int *)(param_1 + 0x1c0) =
       *(int *)(iVar1 + (uint)*(byte *)(iVar4 + 1) * 4) + *(int *)(iVar2 + 4) * 4;
  *(int *)(param_1 + 0x1bc) =
       *(int *)(iVar1 + (uint)*(byte *)(iVar4 + 2) * 4) + *(int *)(iVar2 + 4) * 4;
  *(int *)(param_1 + 0x1c4) =
       *(int *)(iVar1 + (uint)*(byte *)(iVar4 + 3) * 4) + *(int *)(iVar2 + 4) * 4;
  *(int *)(param_1 + 0x1c8) =
       *(int *)(iVar1 + (uint)*(byte *)(iVar4 + 4) * 4) + *(int *)(iVar2 + 4) * 4;
  if ((*(uint *)(DAT_0032c404 + param_1) & 0x400000) == 0) {
    return;
  }
  if ((-1 < *(char *)(param_1 + 0x1ac)) &&
     (*(char *)(param_1 + 0x1ac) != *(char *)(param_1 + 0x1a9))) {
    return;
  }
  if ((int)*(char *)(param_1 + 0x1a9) - 5U < 3) {
    return;
  }
  if ((*(int *)(iVar2 + 4) != 0) && (*(char *)(param_1 + 0x1a6) == '\x02')) {
    return;
  }
  *(undefined *)(param_1 + 0x1b5) = 10;
  *(int *)(param_1 + 0x1bc) = *(int *)(iVar1 + 0x28) + *(int *)(iVar2 + 4) * 4;
  if (*(char *)(param_1 + 0x1b6) == '\x12') {
    uVar3 = 0x10;
  }
  else {
    if (*(char *)(param_1 + 0x1b6) != '\x13') goto LAB_0032c3cc;
    uVar3 = 0x11;
  }
  *(undefined *)(param_1 + 0x1b6) = uVar3;
LAB_0032c3cc:
  *(int *)(param_1 + 0x1c4) =
       *(int *)(iVar1 + (uint)*(byte *)(param_1 + 0x1b6) * 4) + *(int *)(iVar2 + 4) * 4;
  *(undefined *)(param_1 + 0x1b3) = 2;
  *(undefined *)(param_1 + 0x1ac) = 0xff;
  return;
}

