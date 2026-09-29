// OoT3D decomp @ 002681a4  name=FUN_002681a4  size=276

void FUN_002681a4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  FUN_0032d314();
  iVar1 = FUN_0033feac(param_2);
  iVar2 = FUN_003769d8(param_2 + 0x28a0);
  if (iVar2 == 4) {
    iVar1 = FUN_00346964(param_2);
    if (iVar1 != 0) {
      *(undefined2 *)(DAT_002682b8 + param_2) = 0xff;
      iVar1 = FUN_00369f3c(param_2);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x13c) = DAT_002682c0;
        FUN_0036be34(param_2,0xe2);
      }
      else if (iVar1 == 1) {
        *(undefined4 *)(param_1 + 0x13c) = DAT_002682bc;
        FUN_0036be34(param_2,0xe1);
      }
    }
  }
  else {
    iVar2 = FUN_00369a48(param_1,param_2);
    if (iVar2 != 0) {
      if (iVar1 == 0x10d) {
        *(undefined4 *)(DAT_002682c4 + param_2) = 0;
      }
      else if (iVar1 == 0x10e || iVar1 == 0x10f) {
        *(undefined4 *)(DAT_002682c8 + 0x5b4) = 0;
      }
      *(undefined2 *)(param_1 + 0x99c) = 0;
      *(undefined4 *)(param_1 + 0x13c) = DAT_002682cc;
      FUN_003616fc(param_1,0);
      *(ushort *)(param_1 + 0x9c4) = *(ushort *)(param_1 + 0x9c4) & 0xffdf;
    }
  }
  FUN_0032d27c(param_1,param_2);
  return;
}
