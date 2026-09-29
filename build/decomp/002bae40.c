// OoT3D decomp @ 002bae40  name=FUN_002bae40  size=132

void FUN_002bae40(uint param_1,uint *param_2,undefined1 *param_3)

{
  uint uVar1;

  *param_3 = 1;
  switch(param_1 & 0xffff) {
  case 0x6752:
    uVar1 = DAT_002baef4;
    break;
  default:
    *param_2 = param_1;
    *param_3 = 0;
    return;
  case 0x6754:
    uVar1 = DAT_002baef8;
    break;
  case 0x6756:
    uVar1 = DAT_002baefc;
    break;
  case 0x6757:
    uVar1 = DAT_002baf00;
    break;
  case 0x6758:
    uVar1 = DAT_002baf04;
    break;
  case 0x6759:
    uVar1 = 0x6700;
    break;
  case 0x675a:
    uVar1 = DAT_002baf08;
    break;
  case 0x675b:
    uVar1 = DAT_002baf0c;
    break;
  case 0x675c:
    uVar1 = DAT_002baf10;
    break;
  case 0x675d:
    uVar1 = DAT_002baf14;
  }
  *param_2 = uVar1;
  return;
}
