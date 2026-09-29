// OoT3D decomp @ 0026c328  name=FUN_0026c328  size=348

void FUN_0026c328(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  FUN_0032cc6c();
  FUN_0032cacc(param_2);
  iVar1 = DAT_0026c484;
  if (*(short *)(param_1 + 0x1c) == 6) {
    if (*(uint *)(*(int *)(param_2 + 0x20ac) + 0x30) <= DAT_0026c488) {
      return;
    }
    iVar2 = FUN_0037577c(param_2);
    if (iVar2 != 0) {
      return;
    }
    uVar3 = FUN_00375750(param_2 + 0x118,0);
    FUN_0037573c(param_2,uVar3);
    *(undefined1 *)(iVar1 + 0x15a2) = 1;
    *(ushort *)(iVar1 + 0xef6) = *(ushort *)(iVar1 + 0xef6) | 1;
    FUN_00376a78(param_2,0x5a);
  }
  if (*(short *)(param_1 + 0x1c) == 7) {
    iVar2 = *(int *)(param_2 + 0x20ac);
    if (DAT_0026c490 <= (uint)(DAT_0026c48c + *(int *)(iVar2 + 0x28))) {
      return;
    }
    if (*(int *)(iVar2 + 0x2c) <= DAT_0026c494) {
      return;
    }
    if (DAT_0026c498 <= *(int *)(iVar2 + 0x2c)) {
      return;
    }
    if (DAT_0026c49c <= *(uint *)(iVar2 + 0x30)) {
      return;
    }
    if (*(uint *)(iVar2 + 0x30) <= DAT_0026c49c - 0x690000) {
      return;
    }
    iVar2 = FUN_0037577c(param_2);
    if (iVar2 != 0) {
      return;
    }
    uVar3 = FUN_00375750(param_2 + 0x118,1);
    FUN_0037573c(param_2,uVar3);
    *(undefined1 *)(iVar1 + 0x15a2) = 1;
    *(ushort *)(iVar1 + 0xef6) = *(ushort *)(iVar1 + 0xef6) | 2;
    FUN_00376a78(param_2,0x5b);
  }
  *(undefined4 *)(param_1 + 3000) = 1;
  return;
}
