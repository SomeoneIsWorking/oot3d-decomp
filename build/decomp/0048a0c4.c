// OoT3D decomp @ 0048a0c4  name=FUN_0048a0c4  size=228

int FUN_0048a0c4(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  char unaff_r6;
  int unaff_r7;
  int unaff_r8;
  code *extraout_r12;
  code *pcVar4;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;

  puVar2 = DAT_0048a1a8;
  do {
    local_34 = 0;
    iVar3 = FUN_002ce4cc(&local_28,&local_2c,0,0,&local_30,&local_34,*puVar2,puVar2[1]);
    if (DAT_0048a1ac != iVar3 * 0x400000) {
      pcVar4 = extraout_r12;
      iVar1 = 0;
      if (-1 < iVar3) {
        pcVar4 = *(code **)(DAT_0048a1b0 + 0x48);
        iVar1 = DAT_0048a1b0;
      }
      unaff_r6 = '\x01';
      if (-1 < iVar3 && pcVar4 != (code *)0x0) {
        unaff_r6 = (*pcVar4)(*(undefined4 *)(iVar1 + 0x88),local_28,local_2c,0,0,local_30,local_34);
      }
      unaff_r7 = local_2c;
      unaff_r8 = local_28;
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = local_34;
      }
    }
  } while ((unaff_r6 == '\0') || ((-1 < iVar3 && (unaff_r7 != 3 || param_1 != unaff_r8))));
  return iVar3;
}
