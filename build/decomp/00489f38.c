// OoT3D decomp @ 00489f38  name=FUN_00489f38  size=372

undefined4 FUN_00489f38(uint param_1,int param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  char local_3c [4];
  uint local_38;
  int iStack_34;
  uint local_30;
  uint uStack_2c;

  uVar2 = DAT_0048a0ac;
  software_interrupt(0x28);
  local_38 = param_1;
  iStack_34 = param_2;
  local_30 = param_3;
  uStack_2c = param_4;
  while( true ) {
    FUN_0030db4c();
    FUN_0030dab0();
    iVar3 = FUN_002ce75c(local_38,local_3c);
    if (iVar3 < 0) {
      FUN_0030e3ac(iVar3,&DAT_0048a0b0,0,&DAT_0048a0b0);
      FUN_002fb928(0);
    }
    FUN_0030da40();
    uVar4 = *DAT_0048a0b4;
    software_interrupt(0x14);
    uVar5 = uVar4 >> 0x1b;
    if ((uVar4 & 0x80000000) != 0) {
      uVar5 = uVar5 - 0x20;
    }
    if ((uVar5 != 0xfffffff9 && uVar5 != 0) && uVar5 != 1) {
      FUN_003351b4(uVar4);
    }
    if (local_3c[0] != '\0') break;
    if (uStack_2c == *(uint *)(DAT_0048a0b8 + 0xdc) && local_30 == *(uint *)(DAT_0048a0b8 + 0xd8)) {
      return 0;
    }
    if (uStack_2c != DAT_0048a0bc[1] || local_30 != *DAT_0048a0bc) {
      software_interrupt(0x28);
      uVar5 = uStack_2c - (param_2 + (uint)(local_30 < param_1));
      lVar1 = (ulonglong)(local_30 - param_1) * 3 +
              CONCAT44(((int)uVar5 >> 0x1f) * uVar2 +
                       (int)((ulonglong)uVar2 * (ulonglong)uVar5 >> 0x20),
                       (int)((ulonglong)uVar2 * (ulonglong)uVar5)) +
              CONCAT44(uVar5 * 3,(int)((ulonglong)uVar2 * (ulonglong)(local_30 - param_1) >> 0x20));
      iVar3 = (int)((ulonglong)lVar1 >> 0x20);
      bVar6 = local_30 < (uint)lVar1;
      if ((int)(uStack_2c - (iVar3 + (uint)bVar6)) < 0 !=
          (SBORROW4(uStack_2c,iVar3) != SBORROW4(uStack_2c - iVar3,(uint)bVar6))) {
        return 0;
      }
    }
    FUN_0030e604((int)((ulonglong)DAT_0048a0c0 * 10),(int)((ulonglong)DAT_0048a0c0 * 10 >> 0x20));
  }
  return 1;
}
