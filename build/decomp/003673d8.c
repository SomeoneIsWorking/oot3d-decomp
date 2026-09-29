// OoT3D decomp @ 003673d8  name=FUN_003673d8  size=172

void FUN_003673d8(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  uVar2 = DAT_00367488;
  uVar1 = DAT_00367484;
  iVar3 = 0;
  do {
    if (*(char *)(param_3 + 9) == '\0') {
      *(char *)(param_3 + 9) = (char)param_2;
      uVar4 = param_4[1];
      uVar5 = param_4[2];
      *param_3 = *param_4;
      param_3[1] = uVar4;
      param_3[2] = uVar5;
      uVar4 = param_5[1];
      uVar5 = param_5[2];
      param_3[3] = *param_5;
      param_3[4] = uVar4;
      param_3[5] = uVar5;
      param_3[6] = uVar1;
      param_3[7] = uVar2;
      param_3[8] = uVar1;
      if (param_2 == 5) {
        param_3[7] = uVar1;
      }
      param_3[0xc] = param_1;
      param_3[0xe] = DAT_00367490;
      *(undefined1 *)((int)param_3 + 0x26) = 0;
      return;
    }
    param_3 = param_3 + 0x10;
    iVar3 = (int)(short)((short)iVar3 + 1);
  } while (iVar3 < DAT_0036748c);
  return;
}
