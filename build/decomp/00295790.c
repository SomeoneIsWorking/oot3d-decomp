// OoT3D decomp @ 00295790  name=FUN_00295790  size=396

void FUN_00295790(int param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_20;
  float local_1c;
  undefined4 uStack_18;

  FUN_00375a18(param_1 + 0xc0,0,1,4000,0);
  FUN_00370734(param_1 + 0x1a4);
  uVar3 = DAT_00295938;
  uVar2 = DAT_00295930;
  uVar1 = *(ushort *)(param_1 + 0x90);
  if ((uVar1 & 0x62) != 0) {
    if ((uVar1 & 0x40) == 0) {
      FUN_0037378c(DAT_00295938,param_2,param_1 + 0x6d0,2,0x50,0xf,1);
      FUN_0037378c(uVar3,param_2,param_1 + 0x6dc,2,0x50,0xf,1);
      FUN_0037378c(uVar3,param_2,param_1 + 0x6e8,2,0x50,0xf,1);
      FUN_0037378c(uVar3,param_2,param_1 + 0x6f4,2,0x50,0xf,1);
      FUN_00375bcc(param_1,DAT_0029593c);
      *(undefined4 *)(param_1 + 0xc4) = uVar2;
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x84);
    }
    else {
      *(ushort *)(param_1 + 0x90) = uVar1 & 0xffbf;
      local_20 = *(undefined4 *)(param_1 + 0x28);
      uStack_18 = *(undefined4 *)(param_1 + 0x30);
      local_1c = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x88);
      FUN_00362068(param_2,&local_20,0,500,0);
      FUN_00375bcc(param_1,DAT_00295934);
    }
    FUN_00370350(DAT_00295940,param_1 + 0x1a4,0);
    *(undefined1 *)(param_1 + 0x638) = 6;
                    /* WARNING: Subroutine does not return */
    FUN_003702c8(0xf,0x1e);
  }
  return;
}
