// OoT3D decomp @ 003906a8  name=FUN_003906a8  size=176

void FUN_003906a8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  FUN_0032d314();
  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 4) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    iVar1 = FUN_00369f3c(param_2);
    if (iVar1 == 0) {
      uVar2 = FUN_0031c698(param_2);
      FUN_0036be34(param_2,uVar2);
      *(undefined4 *)(param_1 + 0x13c) = DAT_0039075c;
    }
    else if (iVar1 == 1) {
      FUN_003725e0(param_2);
      *(undefined4 *)(param_1 + 0x13c) = DAT_00390758;
      *(undefined2 *)(param_1 + 0x99c) = 0;
      FUN_003616fc(param_1,0);
      *(ushort *)(param_1 + 0x9c4) = *(ushort *)(param_1 + 0x9c4) & 0xffdf;
    }
  }
  FUN_0032d27c(param_1,param_2);
  return;
}
