// OoT3D decomp @ 004596b0  name=FUN_004596b0  size=692

void FUN_004596b0(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;

  iVar3 = DAT_00459964;
  if (*(int *)(DAT_00459964 + 8) < DAT_00459968) {
    (**(code **)(DAT_0045996c + (uint)*(byte *)(param_2 + 8) * 4))(param_1,param_2);
  }
  uVar2 = DAT_00459980;
  cVar1 = *(char *)(param_2 + 9);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(param_2 + 0xc),(byte)(in_fpscr >> 0x15) & 3
                                        );
      local_18 = DAT_00459974 - fVar5 * DAT_00459970;
      local_24 = DAT_00459978;
      local_20 = DAT_00459978;
      local_1c = DAT_00459978;
      if (((*DAT_0045997c & 1) == 0) && (iVar3 = FUN_003679b4(DAT_0045997c), iVar3 != 0)) {
        FUN_0036788c(DAT_00459984);
      }
      FUN_003339e8(uVar2,4,&local_24,0);
      iVar3 = *(int *)(param_2 + 0xc) + -1;
      *(int *)(param_2 + 0xc) = iVar3;
      if (iVar3 < 1) {
        FUN_0034be04(0xb);
        iVar3 = DAT_00459998;
        *(short *)(DAT_00459998 + 0x52) = (short)DAT_00459994;
        *(undefined2 *)(iVar3 + 0xb2) = 0x140;
        *(undefined1 *)(param_1 + 0x7f40) = 0xd3;
        FUN_00353998(param_1);
        *(undefined1 *)(param_1 + 0x7f40) = 0xd3;
        *(undefined4 *)(param_2 + 0xc) = 0x1e;
        *(char *)(param_2 + 9) = *(char *)(param_2 + 9) + '\x01';
        return;
      }
    }
    else if (cVar1 == '\x02') {
      local_24 = DAT_00459978;
      local_20 = DAT_00459978;
      local_1c = DAT_00459978;
      local_18 = DAT_00459974;
      if (((*DAT_0045997c & 1) == 0) && (iVar4 = FUN_003679b4(DAT_0045997c), iVar4 != 0)) {
        FUN_0036788c(DAT_00459984);
      }
      FUN_003339e8(uVar2,4,&local_24,0);
      iVar4 = *(int *)(param_2 + 0xc) + -1;
      *(int *)(param_2 + 0xc) = iVar4;
      if ((*(short *)(iVar3 + 0x42) == *(short *)(iVar3 + 0x44)) && (iVar4 < 1)) {
        FUN_0034be04(1);
        *(undefined4 *)(param_2 + 0xc) = 0xf;
        *(char *)(param_2 + 9) = *(char *)(param_2 + 9) + '\x01';
        return;
      }
    }
    else if (cVar1 == '\x03') {
      local_18 = (float)VectorSignedToFloat(*(undefined4 *)(param_2 + 0xc),
                                            (byte)(in_fpscr >> 0x15) & 3);
      local_18 = local_18 * DAT_00459970;
      local_24 = DAT_00459978;
      local_20 = DAT_00459978;
      local_1c = DAT_00459978;
      if (((*DAT_0045997c & 1) == 0) && (iVar3 = FUN_003679b4(DAT_0045997c), iVar3 != 0)) {
        FUN_0036788c(DAT_00459984);
      }
      FUN_003339e8(uVar2,4,&local_24,0);
      iVar3 = *(int *)(param_2 + 0xc) + -1;
      *(int *)(param_2 + 0xc) = iVar3;
      if (iVar3 < 1) {
        *(undefined1 *)(DAT_00459990 + param_1) = 0;
        *(undefined4 *)(param_2 + 0xc) = 0;
        *(undefined1 *)(param_2 + 9) = 0;
      }
    }
  }
  return;
}
