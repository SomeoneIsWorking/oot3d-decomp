// OoT3D decomp @ 00158aec  name=FUN_00158aec  size=348

void FUN_00158aec(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;

  uVar1 = DAT_00158c48;
  if (*(short *)(param_1 + 0x116) == 0x5005) {
    FUN_00373264(param_1,DAT_00158c48);
  }
  else {
    FUN_00353694(param_1,0xfffffff3);
  }
  iVar3 = FUN_003769d8(param_2 + 0x28a0);
  if (iVar3 == 4) {
    iVar3 = FUN_00346964(param_2);
    if (iVar3 != 0) {
      FUN_003ff758(param_1 + 0x28,uVar1);
      iVar4 = FUN_00369f3c(param_2);
      iVar3 = DAT_00158c4c;
      if (iVar4 == 0) {
        iVar4 = FUN_00377a04();
        if (iVar4 == 0) {
          FUN_00375bcc(param_1,iVar3);
          uVar2 = (undefined2)DAT_00158c5c;
        }
        else {
          FUN_00375bcc(param_1,iVar3 + -0x69);
          if (*(short *)(param_1 + 0x1c) != 0) {
            *(short *)(param_1 + 0x116) = (short)DAT_00158c54;
            FUN_00376a78(param_2,0x1e);
            FUN_00375c10(param_2,*(undefined1 *)(DAT_00158c58 + (uint)*(byte *)(param_1 + 0x8f9)));
            goto LAB_00158c1c;
          }
          FUN_00376a78(param_2,0x20);
          uVar2 = (undefined2)DAT_00158c50;
        }
        *(undefined2 *)(param_1 + 0x116) = uVar2;
      }
      else {
        *(short *)(param_1 + 0x116) = (short)DAT_00158c60;
        FUN_00375bcc(param_1,iVar3);
      }
LAB_00158c1c:
      FUN_0036be34(param_2,*(undefined2 *)(param_1 + 0x116));
      return;
    }
  }
  else {
    iVar3 = FUN_00369a48(param_1,param_2);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x8f4) = DAT_00158c64;
    }
  }
  return;
}
