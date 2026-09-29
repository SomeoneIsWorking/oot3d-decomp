// OoT3D decomp @ 00435eb4  name=FUN_00435eb4  size=180

int FUN_00435eb4(uint *param_1,int *param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_28;

  iVar2 = 0;
  if (param_4 != 0) {
    while( true ) {
      uVar3 = *param_1;
      if (param_5 != 0) {
        uVar3 = uVar3 & 0xfffffffe;
      }
      if (param_5 == 0) {
        uVar3 = uVar3 | 1;
      }
      *param_1 = uVar3;
      iVar1 = FUN_00449f18(&local_28,*param_1 & 0xfffffffe,param_1[1],param_1[2],param_3,param_4,
                           param_5);
      if (iVar1 < 0) {
        return iVar1;
      }
      uVar3 = param_1[1];
      iVar2 = iVar2 + local_28;
      param_1[1] = uVar3 + local_28;
      param_1[2] = param_1[2] + ((int)local_28 >> 0x1f) + (uint)CARRY4(uVar3,local_28);
      if (local_28 == param_4 || local_28 == 0) break;
      param_3 = param_3 + local_28;
      param_4 = param_4 - local_28;
    }
  }
  *param_2 = iVar2;
  return 0;
}
