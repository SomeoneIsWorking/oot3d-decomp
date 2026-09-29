// OoT3D decomp @ 002a2f88  name=FUN_002a2f88  size=524

void FUN_002a2f88(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  if ((*(ushort *)(param_1 + 0x90) & 8) != 0) {
    if (0x8000 < (int)(short)(*(short *)(param_1 + 0x36) - *(short *)(param_1 + 0x82)) + 0x4000U) {
      *(short *)(param_1 + 0x36) =
           (*(short *)(param_1 + 0x82) * 2 - *(short *)(param_1 + 0x36)) + -0x8000;
    }
    *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfff7;
  }
  uVar2 = DAT_002a31c0;
  if ((*(ushort *)(param_1 + 0x90) & 2) != 0) {
    FUN_00375bcc(param_1,DAT_002a31c4);
    uVar3 = DAT_002a31d0;
    if ((uint)DAT_002a31c8 < (uint)*(float *)(param_1 + 100)) {
      *(float *)(param_1 + 100) = *(float *)(param_1 + 100) * DAT_002a31cc;
    }
    else {
      *(undefined4 *)(param_1 + 100) = uVar2;
      uVar3 = DAT_002a31d0;
    }
    FUN_0036f00c(DAT_002a31d4,uVar3,param_2,param_1,param_1 + 0x28,2,0,0,0);
  }
  if (*(short *)(param_1 + 0x11a) == 0) {
    *(undefined4 *)(param_1 + 0xc4) = DAT_002a31d8;
    uVar3 = DAT_002a31e8;
    if (*(char *)(param_1 + 0xb7) == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      uVar2 = DAT_002a31fc;
      if (*(short *)(param_1 + 0x1c) < 0) {
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
        *(undefined4 *)(param_1 + 0x6c) = uVar2;
        *(undefined4 *)(param_1 + 0x534) = 8;
        *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + 20000;
        FUN_0035e4f4(param_2,param_1 + 0x28,DAT_002a3200,1,1,0x28);
      }
      uVar3 = DAT_002a3204;
      *(undefined4 *)(param_1 + 0x524) = 1;
    }
    else {
      sVar1 = *(short *)(param_1 + 0x1c);
      if (sVar1 == -4 || sVar1 == -5) {
        FUN_0036e734(param_1 + 0x1a4,0);
        *(undefined4 *)(param_1 + 0x530) = 1;
        *(undefined2 *)(param_1 + 0x53c) = 0;
        *(undefined4 *)(param_1 + 0x6c) = uVar2;
        *(undefined4 *)(param_1 + 0x524) = 9;
        *(undefined4 *)(param_1 + 0x604) = 0;
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      if (sVar1 == -3) {
        *(undefined4 *)(param_1 + 0x524) = 8;
      }
      else {
        FUN_0036e734(param_1 + 0x1a4,0);
        *(undefined4 *)(param_1 + 0x6c) = DAT_002a31ec;
        *(undefined4 *)(param_1 + 0x524) = 3;
        uVar3 = DAT_002a31f0;
        *(undefined4 *)(param_1 + 0x534) = 300;
        *(undefined4 *)(param_1 + 0x70) = uVar3;
        *(undefined4 *)(param_1 + 0x560) = uVar2;
        *(undefined4 *)(param_1 + 0x55c) = uVar2;
        *(undefined2 *)(param_1 + 0x11a) = 0;
        uVar2 = DAT_002a31f4;
        *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfffe;
        FUN_00375bcc(param_1,uVar2);
        uVar3 = DAT_002a31f8;
      }
    }
    *(undefined4 *)(param_1 + 0x52c) = uVar3;
  }
  return;
}
