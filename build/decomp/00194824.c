// OoT3D decomp @ 00194824  name=FUN_00194824  size=336

void FUN_00194824(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;

  iVar2 = DAT_0019497c;
  uVar4 = DAT_00194978;
  uVar1 = *(ushort *)(param_2 + 0x2b7e);
  if (uVar1 == 4) {
    *(undefined2 *)(param_2 + 0x2b7e) = 0;
    *(undefined4 *)(param_1 + 0x3f4) = uVar4;
  }
  else {
    if (uVar1 < 6) {
      if (uVar1 == 3) {
        FUN_0037547c(DAT_00194990,0,4,DAT_0019498c,DAT_0019498c,DAT_00194988);
        if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
           (iVar3 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
           *(int *)(DAT_00194980 + iVar3) != 0)) {
          iVar3 = iVar3 + 0x3a5c;
        }
        else {
          iVar3 = 0;
        }
        uVar4 = FUN_00375750(iVar3 + 0x10,1);
        FUN_0037573c(param_2,uVar4);
        uVar4 = DAT_00194984;
        *(undefined1 *)(iVar2 + 0x5a2) = 1;
        *(undefined2 *)(param_1 + 0x506) = 0;
        *(undefined4 *)(param_1 + 0x3f4) = uVar4;
        *(undefined2 *)(param_2 + 0x2b7e) = 4;
        return;
      }
      *(uint *)(*(int *)(DAT_00194974 + param_2) + 0x1714) =
           *(uint *)(*(int *)(DAT_00194974 + param_2) + 0x1714) | 0x800000;
      return;
    }
    if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
       (iVar3 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
       *(int *)(DAT_00194980 + iVar3) != 0)) {
      iVar3 = iVar3 + 0x3a5c;
    }
    else {
      iVar3 = 0;
    }
    uVar4 = FUN_00375750(iVar3 + 0x10,2);
    FUN_0037573c(param_2,uVar4);
    uVar4 = DAT_00194984;
    *(undefined1 *)(iVar2 + 0x5a2) = 1;
    *(undefined2 *)(param_1 + 0x506) = 1;
    *(undefined4 *)(param_1 + 0x3f4) = uVar4;
    *(undefined2 *)(param_2 + 0x2b7e) = 4;
  }
  return;
}
