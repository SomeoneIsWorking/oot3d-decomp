// OoT3D decomp @ 003e2570  name=FUN_003e2570  size=292

void FUN_003e2570(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;

  iVar3 = DAT_003e2694;
  FUN_00373264(param_1,DAT_003e2694);
  iVar2 = FUN_003769d8(param_2 + 0x28a0);
  uVar1 = DAT_003e2698;
  if (iVar2 == 4) {
    iVar2 = FUN_00346964(param_2);
    if (iVar2 == 0) {
      return;
    }
    iVar2 = FUN_00369f3c(param_2);
    if (iVar2 == 0) {
      iVar3 = FUN_0036e864(param_2,0xb);
      if ((iVar3 != 0) || (iVar3 = FUN_0036e864(param_2,10), uVar4 = DAT_003e269c, iVar3 != 0)) {
        uVar4 = DAT_003e26a0;
      }
      *(short *)(param_1 + 0x116) = (short)uVar4;
      FUN_0036be34(param_2,uVar4 & 0xffff);
      return;
    }
    if (*(short *)(param_1 + 0x1c) == 2) {
      FUN_00375c10(param_2,0xb);
    }
    else {
      FUN_00375c10(param_2,10);
    }
  }
  else {
    iVar2 = FUN_00369a48(param_1,param_2);
    if (iVar2 == 0) {
      return;
    }
    if (*(short *)(param_1 + 0x116) == 0x5000) {
      FUN_00375c10(param_2,9);
    }
  }
  FUN_003ff758(param_1 + 0x28,iVar3);
  FUN_00375bcc(param_1,iVar3 + -0xfc);
  *(undefined4 *)(param_1 + 0x918) = uVar1;
  return;
}
