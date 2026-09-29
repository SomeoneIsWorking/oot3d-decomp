// OoT3D decomp @ 0039e078  name=FUN_0039e078  size=476

void FUN_0039e078(int param_1,int param_2)

{
  int iVar1;
  uint in_fpscr;
  undefined4 local_6c;
  float local_68;
  undefined4 uStack_64;
  int local_60;

  local_60 = param_2;
  iVar1 = FUN_00373bc0(param_2,param_1 + 0x1bc);
  local_68 = DAT_0039e3d4;
  if (iVar1 == 0) {
    FUN_00376168(param_2,local_60 + 0x5c78,param_1 + 0x1bc);
    return;
  }
  switch(*(ushort *)(param_1 + 0x1c) & 0xff) {
  case 0:
    FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    VectorSignedToFloat(0xffffffd0,(byte)(in_fpscr >> 0x15) & 3);
    VectorSignedToFloat(0xffffffd0,(byte)(in_fpscr >> 0x15) & 3);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  case 1:
    FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    VectorSignedToFloat(0,(byte)(in_fpscr >> 0x15) & 3);
    VectorSignedToFloat(0xffffffe0,(byte)(in_fpscr >> 0x15) & 3);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  case 2:
  case 3:
  case 4:
    FUN_002083f4(param_1,local_60);
  }
  local_6c = *(undefined4 *)(param_1 + 0x28);
  uStack_64 = *(undefined4 *)(param_1 + 0x30);
  local_68 = *(float *)(param_1 + 0x2c) + local_68;
  FUN_0037378c(DAT_0039e574,local_60,&local_6c,0,600,300,1);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
