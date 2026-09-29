// OoT3D decomp @ 00239b88  name=FUN_00239b88  size=340

void FUN_00239b88(int param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  bool bVar4;
  int local_18;

  iVar3 = FUN_0036cf6c(param_2,(int)*(char *)(param_1 + 3));
  if ((iVar3 == 0) && (iVar3 = FUN_0036ec2c(param_2,(int)*(char *)(param_1 + 3)), iVar3 == 0)) {
    iVar3 = FUN_0033f4cc(param_1,param_2);
    if (iVar3 != 0) {
      if (*(short *)(param_2 + 0x104) == 2) {
        uVar2 = (undefined2)DAT_00239cec;
      }
      else {
        uVar2 = (undefined2)DAT_00239ce8;
      }
      *(undefined2 *)(*(int *)(param_2 + 0x20ac) + 0x1728) = uVar2;
      return;
    }
  }
  else if (*(int *)(DAT_00239cdc + 0x4ec) < 1) {
    uVar1 = *(ushort *)(param_2 + 0x104);
    bVar4 = uVar1 == 5;
    if (bVar4) {
      uVar1 = (ushort)*(byte *)(param_1 + 3);
    }
    if (((!bVar4 || uVar1 != 0xd) ||
        (iVar3 = FUN_00360084(param_2 + 0x208c,0x136,6,&local_18,1), iVar3 < 1)) ||
       (0xfe < *(short *)(local_18 + 0x1bc))) {
      FUN_0036ec14(param_2,(int)*(char *)(param_1 + 3));
      *(undefined4 *)(param_1 + 0x1d0) = DAT_00239ce0;
      *(undefined2 *)(param_1 + 0x1c8) = 0;
      FUN_0036a2dc(param_2,param_1,0,0,0);
      FUN_0036a2dc(param_2,*(undefined4 *)(param_2 + 0x20ac),0,0,0);
      FUN_00372244(param_2 + 0x5fcc,0x42,DAT_00239ce4);
      *(undefined2 *)(param_1 + 0x1c8) = 0xffbd;
    }
  }
  return;
}
