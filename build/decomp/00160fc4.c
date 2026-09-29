// OoT3D decomp @ 00160fc4  name=FUN_00160fc4  size=224

void FUN_00160fc4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;

  iVar2 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar2 == 4) && (iVar2 = FUN_00346964(param_2), iVar2 != 0)) {
    iVar2 = FUN_00369f3c(param_2);
    if (iVar2 == 0) {
      if (*(short *)(DAT_001610a8 + 0x48) < 100) {
        FUN_0036be34(param_2,DAT_001610ac);
        uVar3 = DAT_001610b0;
      }
      else {
        iVar2 = FUN_00377a04();
        if (iVar2 == 0) {
          FUN_0036be34(param_2,0x96);
          *(undefined4 *)(param_1 + 0x444) = DAT_001610b4;
          return;
        }
        FUN_00376a60(0xffffff9c);
        uVar1 = DAT_001610bc;
        uVar3 = DAT_001610b8;
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffeffff;
        FUN_003724dc(uVar1,uVar3,param_1,param_2,0x12);
        uVar3 = DAT_001610c0;
      }
    }
    else {
      uVar3 = DAT_001610b0;
      if (iVar2 == 1) {
        FUN_0036be34(param_2,DAT_001610a4);
        uVar3 = DAT_001610b0;
      }
    }
    *(undefined4 *)(param_1 + 0x444) = uVar3;
  }
  return;
}
